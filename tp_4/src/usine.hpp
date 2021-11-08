// Gardien //---------------------------------------------------------------------------------------
#ifndef _USINE_HPP_
#define _USINE_HPP_

#include "carte.hpp"

class UsineCarte {
	private:
		unsigned _nbc = 0;
		unsigned _lim;
		
	public:
		UsineCarte & operator=(UsineCarte &) = delete;
		UsineCarte(UsineCarte &) = delete;
		
		UsineCarte(unsigned lim = 52):
			_nbc(0),
			_lim(lim)
		{}
		
		std::unique_ptr<Carte> getCarte(){
			if(_nbc<_lim)
				return std::unique_ptr<Carte>(new Carte(_nbc++));
			return nullptr;
		}
		
		unsigned size() const{
			return _lim;
		}
		
};

#endif
