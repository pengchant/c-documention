 #include <iostream>
 #include "Box.h"

using std::cout;
using std::endl;

//Box::Box(double aLength,double aWidth,double aHeight):length(aLength),width(aWidth),height(aHeight){}
Box::Box(double aLength,double aWidth,double aHeight){
	double maxSide = aLength>aWidth?aLength:aWidth;
	double minSide = aLength<aWidth?aLength:aWidth;
	length = maxSide>0.0?maxSide:1.0;
	width = minSide>0.0?minSide:1.0;
	height = aHeight>0.0?aHeight:1.0;
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

void Box::show(const Box& aBox){
	cout<<endl
		<<aBox.getLength()<<" by "
		<<aBox.getWidth()<<" by "
		<<aBox.getHeight()<<endl;
}
 
