#include "polaire.hpp"
#include "cartesien.hpp"

Polaire::Polaire(Cartesien & c):
	_a(atan2(c.getY(),c.getX())*180/M_PI),
	_d(sqrt(pow(c.getX(),2)+pow(c.getY(),2)))
{}

double Polaire::getAngle() const{
    return _a;
}

double Polaire::getDistance() const{
    return _d;
}

void Polaire::setAngle(double a){
    _a = a;
}

void Polaire::setDistance(double d){
    _d = d;
}

void Polaire::afficher(std::ostream & ostream) const{
    ostream << "(a=" << _a << ";d=" << _d << ")";
}

void Polaire::convertir(Polaire & p) const{
    p.setAngle(_a);
    p.setDistance(_d);
} 

void Polaire::convertir(Cartesien & c) const{
    c.setX(_d * cos(_a*M_PI/180));
    c.setY(_d * sin(_a*M_PI/180));
}