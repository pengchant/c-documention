#ifndef CARTON_H
#define CARTON_H

#include <string> 
#include "Box.h" 

using std::string;

class Carton : public Box{
	public:
		Carton(double lv,double wv,double hv,string material="CardBoard");
		Carton(const Carton& aCarton);
		~Carton();
		virtual double volume(const int i = 50) const;
	private:
		string* pMaterial; 
};
#endif 
