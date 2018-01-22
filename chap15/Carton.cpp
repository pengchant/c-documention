#include "Carton.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Carton::Carton(const char* pStr) {
	cout<<"Carton constructor 1 called!"<<endl;
	pMaterial = new char[strlen(pStr)+1];
	strcpy(pMaterial,pStr);
}

Carton::Carton(double lv,double wv,double hv,const char* pStr,double dense,double thick):Box(lv,wv,hv),density(dense),thickness(thick){
	pMaterial = new char[strlen(pStr)+1];
	strcpy(pMaterial,pStr);
	cout<<"Carton constructor 2 called!"
		<<endl;
}

// aCarton������Ϊ�������캯���Ĳ�����aCarton��������Carton������Box���͵ĸ���
// ���캯����box��������ã���������Բ���aCarton��ת������ 
Carton::Carton(const Carton& aCarton):Box(aCarton){
	pMaterial = new char[strlen(aCarton.pMaterial)+1];
	strcpy(pMaterial,aCarton.pMaterial);
	cout<<"Carton copy constructor"<<endl;
}

Carton::~Carton(){
	cout<<"Carton destructor~~"<<endl;
	delete[] pMaterial;
}

double Carton::volume() const{
	return length*width*height;
}

double Carton::getWeight() const{
	return 2*(length*width+width*height+height*length)*thickness*density;
}

