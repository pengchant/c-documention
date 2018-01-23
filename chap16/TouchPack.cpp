#include "TouchPack.h" 
#include <iostream>

using std::cout;
using std::endl;

TouchPack::TouchPack(double lVal,double wVal,double hVal):
	Box(lVal,wVal,hVal){ 		
}

double TouchPack::volume(const int i) const{
	cout<<"		--TouchPack volume() called! param="<<i<<endl;
	return 0.85*length*width*height;
}
