#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>
#include <cmath>
#include <vector>

class Vecteur{
	int * _tab;
	unsigned _l;
	unsigned _s;
	public:
		Vecteur():_tab((int*)malloc(10*sizeof(int))),_l(10),_s(0){};
		Vecteur(int n):_tab((int*)malloc(n*sizeof(int))),_l(n),_s(0){};
		Vecteur(Vecteur &);
		
		void add(int a);
		
		int size() const{return _s;}
		int maxSize() const{return _l;}
		
		~Vecteur();
		Vecteur & operator=(const Vecteur &);
		int operator[](int pos) const;
		int& operator[](int pos);
		
		int * getTab();
		int * getTab() const;
		
		void afficher(std::ostream &) const;
};

Vecteur operator+(const Vecteur &,const Vecteur &);
int operator*(const Vecteur &,const Vecteur &);

std::ostream & operator<<(std::ostream &,Vecteur &);

void copyArray(int * out,int * src,unsigned s);
#endif
