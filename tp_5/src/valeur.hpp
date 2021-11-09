#ifndef _VALEUR_HPP_
#define _VALEUR_HPP_

#include <string>

class Valeur {
	private:
		double _v;
		std::string _nom;
	public:
		Valeur(double v = 0,std::string nom="inconnu"):
			_v(v),
			_nom(nom)
		{}
		
		//getter
		double getNombre() const{
			return _v;
		}
		
		double getNote() const{
			return getNombre();
		}
		
		std::string getEtudiant() const{
			return _nom;
		}
		
		//setter
		void setNote(double v){
			setNombre(v);
		}
		
		void setNombre(double v){
			_v = v;
		}
		
		void setEtudiant(std::string nom){
			_nom = nom;
		}
		
		//operator
		bool operator<(Valeur const & b) const {
			return _v<b._v;
		}
};


std::ostream & operator<<(std::ostream & o,Valeur const & v){
	o << "(" << v.getEtudiant() << ";" << v.getNote() << ")";
	return o;
}

#endif
