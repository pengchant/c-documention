#include <iostream>
#include "ABox.h"  

using namespace std; 

ABox::ABox(){
	cout<<"------Default constructor called------"<<endl;
	length = width = height = 1.0;// Ä¬ÈÏÖµ 
}

ABox::ABox(double lengthValue,double widthValue,double heightValue):
	length(lengthValue),width(widthValue),height(heightValue){
	cout<<"///////Box constructor called./////////"<<endl;
	length = lengthValue;
	width = widthValue;
	height = heightValue;
}

double ABox::volume() const{
	return this->length*this->width*this->height;
}





