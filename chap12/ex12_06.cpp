//#include <iostream>
//#include "PBox.h"
//
//using namespace std;
//
//int main(){
//	cout<<endl;
//	PBox firstBox(2.2,1.1,0.5);
//	PBox secondBox;
//	PBox* pthirdBox = new PBox(15.0,20.0,8.0);
//	cout<<"Volume of first box = "
//		<<firstBox.volume()
//		<<endl;
//	cout<<"Surface area of first box = "
//		<<boxSurface(firstBox)
//		<<endl;
//	cout<<"Volume of second box = "
//		<<secondBox.volume()
//		<<endl;
//	cout<<"Surface area of second box = "
//		<<boxSurface(secondBox)
//		<<endl;
//	cout<<"Volume of third box = "
//		<<pthirdBox->volume()
//		<<endl;
//	cout<<"Surface area of third box = "
//		<<boxSurface(*pthirdBox)
//		<<endl;
//	// É¾³ý×ÔÓÉ´æ´¢ÇøµÄÄÚ´æ±ÜÃâÄÚ´æÐ¹Â© 
//	delete pthirdBox;
//	return 0;
//}
//
//double boxSurface(const PBox& theBox){
//	return 2.0*(theBox.getLength()*theBox.getWidth()+
//				theBox.getWidth()*theBox.getHeight()+
//				theBox.getHeight()*theBox.getLength());
//}
