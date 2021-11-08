// Gardien //---------------------------------------------------------------------------------------
#ifndef _CARTE_HPP_
#define _CARTE_HPP_

class Carte {
	private:
		static unsigned nbC;
		unsigned _num;
		Carte(unsigned num):_num(num){
			nbC++;
		}
	public:
		Carte & operator=(Carte &) = delete;
		Carte() = delete;
		Carte(Carte &) = delete;
		
		unsigned getValeur() const{ return _num;}
		static unsigned getCompteur() { return nbC;}
		
		~Carte(){
			nbC--;
		}
		
		friend class UsineCarte;
};

unsigned Carte::nbC = 0;

std::ostream & operator<<(std::ostream & o,Carte const & c){
	o << c.getValeur();
	return o;
}

#endif
