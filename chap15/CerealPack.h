#ifndef CREALPACK_H
#define CREALPACK_H
#include "Carton.h"
#include "Contents.h"
class CerealPack:public Contents,public Carton{
	public:
		CerealPack(double length,double width,double height,const char* cerealType);
		~CerealPack();
};
#endif 

