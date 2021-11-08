#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include "point.hpp"

class Polaire : public Point{
    private:
        double _a;
        double _d;
    public:
        Polaire():_a(0),_d(0){};
        Polaire(double a,double d):_a(a),_d(d){};
		Polaire(Cartesien&);
        
		double getAngle() const;
        double getDistance() const;
        
		void setAngle(double a);
        void setDistance(double d);
		
        void afficher(std::ostream &) const;
		
		void convertir(Cartesien &) const;
        void convertir(Polaire &) const;
};

#endif