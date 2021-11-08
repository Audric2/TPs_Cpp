#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <iostream>
#include <cmath>
#include <vector>

#include "point.hpp" 

class Nuage{
	std::vector<Point*> _vp;
    public:
		Nuage():_vp(std::vector<Point*>(0)){};
        void ajouter(Point & p);
		int size() const;
		
		class const_iterator{
			std::vector<Point*>::const_iterator _it;
			public:
				const_iterator(std::vector<Point*>::const_iterator);
				const_iterator operator++(int);
				Point * operator*() const;
				bool operator==(const_iterator const &) const;
				bool operator!=(const_iterator const &) const;
		};
		
		Nuage::const_iterator begin() const;
		Nuage::const_iterator end() const;
};

Cartesien barycentre(Nuage & n);

class BarycentreCartesien{
	public:
		Cartesien operator()(Nuage & n);
};

class BarycentrePolaire{
	public:
		Polaire operator()(Nuage & n);
};
#endif
