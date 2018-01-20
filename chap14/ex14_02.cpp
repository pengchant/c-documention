//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using std::cout;
//using std::endl;
//
//#include "Box.h" 
//
//inline int random(int count){
//	return 1+static_cast<int>(count*(static_cast<double>(rand()))/(RAND_MAX+1));
//}
// 
//int main(){
//	const int dimLimit = 100;
//	srand((unsigned)time(0));
//	
//	const int boxCount = 20;
//	Box boxes[boxCount];
//	for(int i = 0;i<boxCount;i++){
//		boxes[i] = Box(random(dimLimit),random(dimLimit),random(dimLimit));
//	}
//	Box* pLargest = &boxes[0];
//	// find the max volume of the 15 boxes
//	for(int i = 1;i<boxCount;i++) {
//		if(*pLargest<boxes[i]){
//			pLargest = &boxes[i];
//		}
//	}
//	cout<<endl
//		<<"The largest box in the array has dimensions:";
//		
//	Box::show(*pLargest);
//	
//	int volMin = 100000.0;
//	int volMax = 500000.0;
//	cout<<endl<<endl
//		<<"Boxes with volumes between "
//		<<volMin<<" and "<<volMax<<" are:";
//	for(int i = 0;i<boxCount;i++){
//		if(volMin<boxes[i]&&boxes[i]<volMax){
//			Box::show(boxes[i]);
//		}
//	}
//	cout<<endl;
//	return 0; 
//} 
