#include "vecteur.hpp" 


Vecteur::Vecteur(Vecteur & v):
	_tab((int*)malloc(v._l*sizeof(int))),
	_l(v._l)
{}

Vecteur::~Vecteur(){
	free(_tab);
}

Vecteur & Vecteur::operator=(const Vecteur & v){
	_l = v._l;
	_s = v._s;
	free(_tab);
	_tab = (int*)malloc(_l*sizeof(int));
	for(unsigned i=0;i<_s;++i){
		_tab[i] = v._tab[i];
	}
	return *this;
}

void Vecteur::add(int a){
	if(_s >= _l){
		_l = (int)(1.5 * _l + 1);
		int * tmp = (int*)malloc(_l*sizeof(int));
		copyArray(tmp,_tab,_s);
		free(_tab);
		_tab = tmp;
	}
	_tab[_s] = a;
	++_s;
}
int * Vecteur::getTab(){
	return _tab;
}

int * Vecteur::getTab() const{
	return _tab;
}

int Vecteur::operator[](int pos) const{
	return _tab[pos];
}


int& Vecteur::operator[](int pos){
	return _tab[pos];
}

void Vecteur::afficher(std::ostream & o) const{
	for(unsigned i=0;i<_s;i++){
		o << "\n" << _tab[i]; 
	}
}


Vecteur operator+(const Vecteur & a ,const Vecteur & b){
	Vecteur c(a.size()+b.size()+1);
	unsigned sa = a.size();
	unsigned sb = b.size();
	for(unsigned i = 0;i<sa;i++){
		c.add(a[i]);
	}
	for(unsigned i = 0;i<sb;i++){
		c.add(b[i]);
	}
	return c;
}

int operator*(const Vecteur & a ,const Vecteur & b){
	int c = 0;
	for(int i=0;i<a.size();i++){
		c += a[i]*b[i];
	}
	return c;
}

std::ostream & operator<<(std::ostream & o,Vecteur & v){
	v.afficher(o);
	return o;
}

void copyArray(int * out,int * src,unsigned s){
	for(unsigned i=0;i<s;i++){
		out[i] = src[i];
	}
}



