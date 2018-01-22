#include "Contents.h"
#include <cstring>
#include <iostream>

using std::cout; 
using std::endl;

Contents::Contents(const char* pStr,double weight,double vol):unitweight(weight),volume(vol){
	pName = new char[strlen(pStr)+1];
	strcpy(pName,pStr);
	cout<<"Contents constructor"<<endl; 
}

Contents::~Contents(){
	delete[] pName;
	cout<<"Contents destructor "<<endl;
}

double Contents::getWeight() const{
	return volume*unitweight;
}
