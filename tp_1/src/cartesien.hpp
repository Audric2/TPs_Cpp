#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include "point.hpp"

class Cartesien : public Point{
    private:
        double _x;
        double _y;
    public:
        Cartesien():_x(0),_y(0){};
        Cartesien(double x,double y):_x(x),_y(y){};
        Cartesien(Polaire&);
		
		double getX() const;
        double getY() const;

        void setX(double);
        void setY(double);

        void afficher(std::ostream &) const;
		
		void convertir(Cartesien &) const;
        void convertir(Polaire &) const;
};

#endif