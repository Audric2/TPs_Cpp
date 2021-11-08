// Gardien //---------------------------------------------------------------------------------------
#ifndef _CONSOMMATEUR_HPP_
#define _CONSOMMATEUR_HPP_

#include "ressource.hpp"

class Consommateur {
	private:
		int _con;
		std::shared_ptr<Ressource> _r;
	public:
		Consommateur(int con,std::shared_ptr<Ressource> r):
			_con(con),
			_r(r)
		{}
		
		void puiser(){
			try{
				if(_r != nullptr)
					_r->consommer(_con);
			}catch(const std::out_of_range & err){
				_r = nullptr;
			}
		}
};


#endif
