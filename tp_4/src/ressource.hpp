// Gardien //---------------------------------------------------------------------------------------
#ifndef _RESSOURCE_HPP_
#define _RESSOURCE_HPP_

class Ressource {
	private:
		int _stock;
	public:
		Ressource(int stockInitial):
			_stock(stockInitial)
		{}
		
		void consommer(int consommation){
			if(_stock>=consommation){
				_stock -= consommation;
			}else{
				_stock = 0;
				throw std::out_of_range("");
			}
		}
		
		int getStock() const{
			return _stock;
		}
};

using ressources_t = std::vector<std::weak_ptr<Ressource>>;

inline std::ostream & operator<<(std::ostream & o,ressources_t const & p) {
	for (auto i = p.begin(); i!=p.end(); ++i){
		if(!(*i).expired()){
			o << ((*i).lock())->getStock() << " ";
		}else{
			o << "- ";
		}
	}
	return o;
}

#endif
