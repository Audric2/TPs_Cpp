#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

class Cartesien;
class Polaire;

class Point{
    public:
        virtual void afficher(std::ostream & ostream) const = 0;
        virtual void convertir(Cartesien &) const = 0;
        virtual void convertir(Polaire &) const = 0;
};

std::ostream& operator<<(std::ostream& os,const Point & p);

#endif
