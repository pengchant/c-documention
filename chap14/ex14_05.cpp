//#include <iostream>
//#include <cstdlib> 
//#include <ctime>
//
//using std::cout;
//using std::endl;
//
//#include "Box.h"
//#include "List.h"
//
//inline int random(int count){
//	return 1+static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1));
//}
//
//int main(){
//	// 定义一个random的上限定 
//	const int dimLimit = 100;
//	srand((unsigned)time(0));
//	const int boxCount = 20;
//	Box boxes[boxCount];
//	// 随机生成box的对象的相关数据 
//	for(int i = 0;i<boxCount;i++){
//		boxes[i] = Box(random(dimLimit),random(dimLimit),random(dimLimit));
//	} 
//	TruckLoad load = TruckLoad(boxes,boxCount);
//	// 寻找boxes[]对象数组中的最大的box对象 
//	Box maxBox = load[0];
//	for(int i = 1;i<boxCount;i++){
//		if(maxBox<load[i]) {// 这里使用下表运算符重载函数operator[](index) 以及box对象的<的运算符重载 
//			maxBox = load[i];
//		}
//	}
//	cout<<endl
//		<<"The largest box in the list is ";
//	Box::show(maxBox);
//	cout<<endl;
//	return 0;
//}
