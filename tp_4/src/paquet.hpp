// Gardien //---------------------------------------------------------------------------------------
#ifndef _PACKET_HPP_
#define _PACKET_HPP_

#include <iostream>
#include "usine.hpp"

using paquet_t = std::vector<std::unique_ptr<Carte>>;

void remplir(paquet_t & packet,UsineCarte & usine){
	std::unique_ptr<Carte> p;
	while(p = usine.getCarte()){
		packet.push_back(std::move(p));
	}
}

inline std::ostream & operator<<(std::ostream & o,paquet_t const & p) {
	for (auto i = p.begin(); i!=p.end(); ++i) o << **i << " ";
	return o;
}

#endif
