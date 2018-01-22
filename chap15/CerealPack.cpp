#include <iostream>
#include "Carton.h"
#include "Contents.h"
#include "Cerealpack.h"

using std::cout;
using std::endl;

CerealPack::CerealPack(double length,double width,double height,const char* cerealType):
	Contents(cerealType),Carton(length,width,height,"cardboard"){
	cout<<"CerealPack constructor "<<endl;
	Contents::volume = 0.9*Carton::volume();	
}

CerealPack::~CerealPack(){
	cout<<"CerealPack destructor "<<endl;
}


