#ifndef _CLASSE_HPP_
#define _CLASSE_HPP_

#include "Valeur.hpp"
	
class Classe {
	private:
		double _min;
		double _max;
		size_t _n;
	public:
		Classe(double min = 0, double max = 0,size_t n = 0):
			_min(min),
			_max(max),
			_n(n)
		{}
		
		
		//getter
		double getBorneInf() const{return _min;}
		
		double getBorneSup() const{return _max;}
		
		size_t getQuantite() const{return _n;}
		
		bool isIn(Valeur v) const{return (_max>v.getNombre() && v.getNombre()>=_min);}
		
		//setter
		void setBorneInf(double min){_min = min;}
		
		void setBorneSup(double max){_max = max;}
		
		void setQuantite(size_t n){_n = n;}
		
		void ajouter(size_t n = 1){_n += n;}
		
		bool operator<(Classe const & b) const{
			return getBorneInf() < b.getBorneInf();
		}
		
		bool operator>(Classe const & b) const{
			return getBorneInf() > b.getBorneInf();
		}
};

std::ostream & operator<<(std::ostream & o,Classe const & c){
	o << "[" << c.getBorneInf() << ";";
	o << c.getBorneSup() << "] = ";
	o << c.getQuantite();
	return o;
}

#endif
