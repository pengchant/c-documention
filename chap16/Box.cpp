#include <iostream>
#include "Box.h"

using std::cout;
using std::endl;

Box::Box(double lvalue,double wvalue,double hvalue):
	length(lvalue),width(wvalue),height(hvalue){		
}

void Box::showVolume() const{
	cout<<"Box usable volume is "<<volume()<<endl;
}

double Box::volume(const int i) const{
	cout<<"		---box volume() is called !parameter="<<i<<endl;
	return length*width*height;
}
