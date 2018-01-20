//#include <iostream>
//#include <cstdlib>
//#include <ctime>
// 
//using std::cout;
//using std::endl;
//
//#include "Box.h"
//
//// 内联函数
//inline int random(int count) {
//	return 1+static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1.0));
//}
//
//int main(){
//	const int dimLimit = 100;
//	srand((unsigned)time(0));
//	
//	const int boxCount = 20;
//	Box boxes[boxCount];
//	
//	for(int i = 0;i<boxCount;i++){
//		boxes[i] = Box(random(dimLimit),random(dimLimit),random(dimLimit));
//	}
//	Box* pLargest = &boxes[0];
//	// 找出最大值 
//	for(int i = 1;i<boxCount;i++){
//		if(*pLargest<boxes[i]){// 直接利用重载<的运算符进行比较 
//			pLargest = &boxes[i];
//		}
//	}
//	// 输出结果
//	cout<<endl
//		<<"The box with the largest volume has dimensions:" 
//		<<pLargest->getLength()<<" by "
//		<<pLargest->getWidth()<<" by "
//		<<pLargest->getHeight()
//		<<endl;
//	
//	return 0;
//}
