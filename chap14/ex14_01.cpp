//#include <iostream>
//#include <cstdlib>
//#include <ctime>
// 
//using std::cout;
//using std::endl;
//
//#include "Box.h"
//
//// ��������
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
//	// �ҳ����ֵ 
//	for(int i = 1;i<boxCount;i++){
//		if(*pLargest<boxes[i]){// ֱ����������<����������бȽ� 
//			pLargest = &boxes[i];
//		}
//	}
//	// ������
//	cout<<endl
//		<<"The box with the largest volume has dimensions:" 
//		<<pLargest->getLength()<<" by "
//		<<pLargest->getWidth()<<" by "
//		<<pLargest->getHeight()
//		<<endl;
//	
//	return 0;
//}
