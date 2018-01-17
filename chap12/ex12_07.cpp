#include <iostream>
#include "PBox.h"

using namespace std;

int main(){
//	cout<<endl;
//	PBox firstBox(17.0,11.0,5.0);
//	PBox secondBox(9.0,18.0,4.0);
//	cout<<"the first box is "	
//		<<(firstBox.compareVolume(secondBox)>0?"":"not ")
//		<<"greater than the second box."
//		<<endl;
//	cout<<"volume of first box= "
//		<<firstBox.volume()
//		<<endl;
//	cout<<"Volume of second box = "
//		<<secondBox.volume()
//		<<endl;	

	PBox aBox(10,15,25);
	PBox* pBox = &aBox;
	pBox->setLength(20)->setWidth(40)->setHeight(10);
	cout<<"volume of pBox = "
		<<pBox->volume()
		<<endl;
	// É¾³ý 
//	delete pBox;
}
