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
//	// ����һ��random�����޶� 
//	const int dimLimit = 100;
//	srand((unsigned)time(0));
//	const int boxCount = 20;
//	Box boxes[boxCount];
//	// �������box�Ķ����������� 
//	for(int i = 0;i<boxCount;i++){
//		boxes[i] = Box(random(dimLimit),random(dimLimit),random(dimLimit));
//	} 
//	TruckLoad load = TruckLoad(boxes,boxCount);
//	// Ѱ��boxes[]���������е�����box���� 
//	Box maxBox = load[0];
//	for(int i = 1;i<boxCount;i++){
//		if(maxBox<load[i]) {// ����ʹ���±���������غ���operator[](index) �Լ�box�����<����������� 
//			maxBox = load[i];
//		}
//	}
//	cout<<endl
//		<<"The largest box in the list is ";
//	Box::show(maxBox);
//	cout<<endl;
//	return 0;
//}
