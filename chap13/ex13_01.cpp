//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <iomanip>
//
//#include "Box.h"
//#include "List.h" 
//
//using namespace std;
//
//// 内联函数 
//inline int random(int count){
//	return 1+static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1.0));
//}
//
//int main(){
//	const int dimLimit = 100;
//	srand((unsigned)time(0));
//	TruckLoad loadl;
//	
//	for(int i = 0;i<10;i++){
//		loadl.addBox(new Box(random(dimLimit),random(dimLimit),random(dimLimit)));		
//	}
//	Box* pBox = loadl.getFirstBox();
//	Box* pNextBox;
//	// 找最大的box 
//	while(pNextBox = loadl.getNextBox()){
//		if(pBox->compareVolume(*pNextBox)<0){
//			pBox = pNextBox;
//		}
//	}
//	cout<<endl
//		<<"The largest box in the first list is " 
//		<<pBox->getLength()<<" by "
//		<<pBox->getWidth()<<" by "
//		<<pBox->getHeight()<<" by "
//		<<endl;
//		
//	const int boxCount = 20;
//	Box boxes[boxCount];
//	
//	for(int i = 0;i<boxCount;i++){
//		boxes[i] = Box(random(dimLimit),random(dimLimit),random(dimLimit));
//	}
//	
// 	TruckLoad load2(&boxes[0],boxCount); 
//	pBox = load2.getFirstBox();
//	// 找最大的box 
//	while(pNextBox = load2.getNextBox()){
//		if(pBox->compareVolume(*pNextBox)<0){
//			pBox = pNextBox;
//		}
//	}
//	cout<<endl
//		<<"The largest box in the second list is "
//		<<pBox->getLength()<<" by "
//		<<pBox->getWidth()<<" by "
//		<<pBox->getHeight()<<" by "
//		<<endl;  
//	
//	// 删除内存 
//	pNextBox = loadl.getFirstBox();
//	while(pNextBox){
//		delete pNextBox;
//		pNextBox = loadl.getNextBox();
//	}	
//	return 0;
//}
