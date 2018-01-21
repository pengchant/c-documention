#include "Carton.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Carton::Carton(const char* pStr) {
	cout<<"Carton constructor called!"<<endl;
	pMaterial = new char[strlen(pStr)+1];
	strcpy(pMaterial,pStr);
}

Carton::~Carton(){
	delete[] pMaterial;
}


