#include <iostream>
#include "Box.h"
#include "TouchPack.h"
#include "Carton.h"

using std::cout;
using std::endl;

void showVolume(const Box& rBox);

int main(){
	Box myBox(20.0,30.0,40.0);
	TouchPack hardcase(20.0,30.0,40.0);
	Carton aCarton(20.0,30.0,40.0);
	
	cout<<endl;
//	myBox.showVolume();
//	hardcase.showVolume();
//	aCarton.showVolume();
	showVolume(myBox);
	showVolume(hardcase);
	showVolume(aCarton);
	cout<<endl;
	
	cout<<"hardcase volume is "<<hardcase.volume()<<endl;
	
	cout<<endl;
	Box* pBox = &myBox;
	cout<<"myBox volume through pBox is "<<pBox->volume()<<endl;
	pBox->showVolume();
	cout<<endl;
	
	pBox = &hardcase;
	cout<<"hardace volume though pBox is "<<pBox->volume()<<endl;
	pBox->showVolume();
	cout<<endl;
	
	pBox = &aCarton;
	cout<<"aCarton volume though pBox is "<<pBox->volume()<<endl;
	pBox->showVolume();
	cout<<endl;
	 
	// 使用类名和作用域解析运算符来制定要使用的函数，就可以强制
	// 静态调用虚函数的基类版本 
	double difference = pBox->Box::volume() - pBox->volume(0);
	cout<<"diffreence1 = " <<difference<<endl;
	// 还可以用静态强制类型转换 
	difference = static_cast<Box>(aCarton).volume() - pBox->volume(0);
	cout<<"diffreence2 = " <<difference<<endl;
	
	return 0;
}

void showVolume(const Box& rBox){
	rBox.showVolume();
}
