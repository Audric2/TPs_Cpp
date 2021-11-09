#ifndef _HISTOGRAMME_HPP_
#define _HISTOGRAMME_HPP_

#include <algorithm>
#include <iostream>
#include <set>
#include <map>
#include "classe.hpp"
#include "echantillon.hpp"


template <typename t>
class ComparateurQuantite{
	public:
		bool operator()(Classe const & a,Classe const & b){
			return (a.getQuantite() > b.getQuantite()) || 
			 (a.getQuantite() == b.getQuantite() && a.getBorneInf() < b.getBorneInf());
		}
};

class CompareHetero{
	public:
		bool operator()(Classe const & c,std::pair<Classe,Valeur> const & p){
			return c.getBorneInf()<p.first.getBorneInf();
		}
		bool operator()(std::pair<Classe,Valeur> const & p,Classe const & c){
			return c.getBorneInf()>p.first.getBorneInf();
		}
};

template <class Compare = std::less<Classe>>
class Histogramme{

	using Container = std::set<Classe,Compare>;
	using HashMap = std::multimap<Classe,Valeur>;
	using PaireH = std::pair<Classe,Valeur>;
	private:
		double _min,_max;
		size_t _n;
		Container _v;
		HashMap _h;
	public:
		Histogramme(double min = 0,double max = 0,size_t n = 0):
			_min(min),
			_max(max),
			_n(n),
			_v(Container()),
			_h(HashMap())
		{
			double d = (_max - _min);
			for(size_t i=0;i<_n;i++){
				_v.insert(Classe(_min + d*i/_n,_min + d*(i+1)/_n));
			}
		}
		
		template <typename T>
		Histogramme(Histogramme<T> & h):
			_min(h.getMinimum()),
			_max(h.getMaximum()),
			_n(h.getN()),
			_v(Container())
		{
			for(auto c:h.getClasses()){
				_v.insert(c);
			}
		}
		
		double getMinimum()const{return _min;}
		
		double getMaximum()const{return _max;}
		
		size_t getN()const{return _n;}
		
		Container const getClasses() const{
			return _v;
		}
		
		HashMap const getValeurs() const{
			return _h;
		}
		
		auto const getValeurs(Classe const & c) const{
			return std::equal_range(_h.begin(),_h.end(), c, CompareHetero{});;
		}
		
		void ajouter(Echantillon const & e){
			size_t n = e.getTaille();
			std::vector<Classe> a_re;
			for(auto it = _v.begin();it!=_v.end();){
				Classe a(*it);
				for(size_t i=0;i<n;++i){
					Valeur v = e.getValeur(i);
					if((*it).isIn(v)){
						_h.insert(PaireH(a,v));
						a.ajouter();
					}
				}
				if(a.getQuantite()!=(*it).getQuantite()){
					_v.erase(it++);
					a_re.push_back(a);
				}else{
					++it;
				}
			}
			for(auto c : a_re){
				_v.insert(c);
			}
		}
};

template <typename T>
std::ostream & operator<<(std::ostream & o,Histogramme<T> const & h){
	auto vc = h.getClasses();
	auto hash = h.getValeurs();
	std::for_each(vc.begin(),vc.end(),
		[&o,&hash](Classe const & c) mutable{
			o << c << " : ";
			const auto p2 = std::equal_range(hash.begin(),hash.end(), c, CompareHetero{});
			for ( auto it = p2.first; it != p2.second; ++it )
				o << (*it).second << ' ';
			o << "\n";
		}
	);
	return o;
}




#endif
