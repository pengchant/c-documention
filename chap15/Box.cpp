#include <iostream> 
#include "box.h"

using std::cout;
using std::endl;

Box::Box(double lv,double wv,double hv):length(lv),width(wv),height(hv){
	cout<<"Box constructor called!"<<endl;
}

double Box::volume() const{
	return length*width*height;
}
