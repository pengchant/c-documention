#include <iostream>
#include "Box.h"

using std::cout;
using std::endl;

Box::~Box(){
	cout<<"Box destructor called."<<endl;
} 

Box::Box(double aLength,double aWidth,double aHeight){
	length = aLength>0?aLength:1.0;
	width = aWidth>0?aWidth:1.0;
	height = aHeight>0?aHeight:1.0;
}

double Box::volume() const{
	return length*width*height;
}

double Box::getLength() const{
	return length; 
} 

double Box::getWidth() const{
	return width;
}
double Box::getHeight() const{
	return height;
}

int Box::compareVolume(const Box& otherBox) const{
	double vol1 = volume();
	double vol2 = otherBox.volume();
	return vol1>vol2?1:(vol1<vol2?-1:0);
}
