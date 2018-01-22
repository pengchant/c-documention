#ifndef CARTON_H
#define CARTON_H
#include "Box.h"
class Carton : public Box{
	public:
		Carton(const char* pStr = "Cardboard");
		Carton(double lv = 1.0,double wv = 1.0,double hv =1.0,const char* pStr="Cardboard",
				double tv = 1.0,double dv = 1.0);
		~Carton(); 
		double volume() const;
		Carton(const Carton& aCarton);
		double getWeight() const;
	private:
		char* pMaterial;
		double thickness;
		double density;
};
#endif
