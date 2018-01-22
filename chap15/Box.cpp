#include <iostream> 
#include "box.h"

using std::cout;
using std::endl;

Box::Box():length(1.0),width(1.0),height(1.0){
	cout<<"Default Box constructor1"<<endl;
}

Box::~Box(){
	cout<<"Box destructor~~"<<endl;
}

Box::Box(const Box& aBox):length(aBox.length),width(aBox.width),height(aBox.height){
	cout<<"Box copy constructor called"<<endl;
}

Box::Box(double lv,double wv,double hv):length(lv),width(wv),height(hv){
	cout<<"Box constructor2 called!"<<endl;
}

double Box::volume() const{
	return length*width*height;
}

 
