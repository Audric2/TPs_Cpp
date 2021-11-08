#include "nuage.hpp" 
#include "cartesien.hpp"
#include "polaire.hpp" 

void Nuage::ajouter(Point & p){
	_vp.push_back(&p);
}

int Nuage::size() const{
	return _vp.size();
}



Nuage::const_iterator Nuage::begin() const{
	return const_iterator(_vp.begin());
}

Nuage::const_iterator Nuage::end() const{
	return const_iterator(_vp.end());
}
		
		
//const_iterator
Nuage::const_iterator::const_iterator(std::vector<Point*>::const_iterator it):
	_it(it)
{}

Nuage::const_iterator Nuage::const_iterator::operator++(int){
	return _it++;
}

Point * Nuage::const_iterator::operator*() const{
	return *_it;
}

bool Nuage::const_iterator::operator==(const_iterator const & it) const{
	return _it==it._it;
}

bool Nuage::const_iterator::operator!=(const_iterator const & it) const{
	return _it!=it._it;
}

//fin classe
Cartesien barycentre(Nuage & n){
	Nuage::const_iterator itn = n.begin();
	double sumx,sumy;
	int nb = n.size();
	Cartesien c = Cartesien(); 
	while(itn!=n.end()){
		(*itn)->convertir(c);
		sumx += c.getX();
		sumy += c.getY();
		itn++;
	}
	return Cartesien(sumx/nb,sumy/nb);
}


Cartesien BarycentreCartesien::operator()(Nuage & n){
	return barycentre(n);
}


Polaire BarycentrePolaire::operator()(Nuage & n){
	Cartesien c = barycentre(n);
	return Polaire(c);
}

