#include "polaire.hpp"
#include "cartesien.hpp"

Cartesien::Cartesien(Polaire & p):
	_x(p.getDistance() * cos(p.getAngle()*M_PI/180)),
	_y(p.getDistance() * sin(p.getAngle()*M_PI/180))
{}

double Cartesien::getX() const{
    return _x;
}

double Cartesien::getY() const{
    return _y;
}

void Cartesien::setX(double x){
    _x = x;
}

void Cartesien::setY(double y){
    _y = y;
}

void Cartesien::afficher(std::ostream & ostream) const{
    ostream <<"(x=" <<_x << ";y=" << _y << ")";
}

void Cartesien::convertir(Polaire & p) const{
    p.setAngle(atan2(_y,_x)*180/M_PI);
    p.setDistance(sqrt(_x*_x+_y*_y));
} 

void Cartesien::convertir(Cartesien & c) const{
    c.setX(_x);
    c.setY(_y);
}