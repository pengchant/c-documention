#include <iostream>
#include "Box.h"

using namespace std;

Box::Box(){
	cout<<"Default constructor called "<<endl;
	length = width = height = 1.0;// Ä¬ÈÏÖµ 
}

Box::Box(double lengthValue,double widthValue,double heightValue):
	length(lengthValue),width(widthValue),height(heightValue){
	cout<<"Box constructor called."<<endl;
	length = lengthValue;
	width = widthValue;
	height = heightValue;
}

double Box::volume(){
	return length*width*height;
}
