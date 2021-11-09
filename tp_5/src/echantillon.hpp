#ifndef _ECHANTILLON_HPP_
#define _ECHANTILLON_HPP_

#include <vector>
#include <algorithm>
#include "Valeur.hpp"

class Echantillon {
	private:
		std::vector<Valeur> _v;
	public:
		Echantillon():
			_v(std::vector<Valeur>(0))
		{}
		
		Echantillon(double d):
			_v(std::vector<Valeur>(1))
		{
			_v.push_back(Valeur(d));
		}
		
		size_t getTaille() const{
			return _v.size();
		}
		
		void ajouter(Valeur && v){
			_v.push_back(v);
		}
		
		Valeur & getMinimum(){
			if(!getTaille()){
				throw std::domain_error("");
			}
			return *(std::min_element(_v.begin(),_v.end()));
		}
		
		Valeur & getMaximum(){
			if(!getTaille()){
				throw std::domain_error("");
			}
			return *(std::max_element(_v.begin(),_v.end()));
		}
		
		Valeur const & getValeur(size_t i) const{
			if(i>=getTaille()){
				throw std::out_of_range("");
			}
			return _v[i];
		}
		
		auto const & getValeurs() const{
			return _v;
		}
};

std::ostream & operator<<(std::ostream & o,Echantillon const & e){
	auto v = e.getValeurs();
	o << "Echantillon = ";
	std::for_each(v.begin(),v.end(),
		[&o](Valeur const v) mutable{
			o << v << " ";
		}
	);
	return o;
}

#endif
