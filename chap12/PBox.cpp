#include <iostream>
#include "PBox.h" 

using namespace std;

PBox::PBox(double lValue,double wValue,double hValue):
	length(lValue),width(wValue),height(hValue){
	cout<<"Box constructor called"<<endl;
	if(length<=0.0){
		length = 1.0;
	}
	if(width<=0.0){
		width = 1.0;
	}
	if(height<=0.0){
		height = 1.0;
	}
}

int PBox::compareVolume(PBox& otherBox){
	double vol1 = this->volume();
	double vol2 = otherBox.volume();
	return vol1>vol2?1:(vol1<vol2?-1:0);
}

double PBox::volume(){
	return length*width*height;
}

PBox* PBox::setLength(double lvalue){
	if(lvalue>0){
		length = lvalue;
	}
	return this;
}

PBox* PBox::setWidth(double wvalue){
	if(wvalue>0){
		width = wvalue;
	}
	return this;
}

PBox* PBox::setHeight(double hvalue){
	if(hvalue>0){
		height = hvalue;
	}
	return this;
}
