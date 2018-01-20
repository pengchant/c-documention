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
//	return 1+ static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1)); 
//}
//
//int main(){
//	const int diLimit = 100;
//	srand((unsigned)time(0));
//	const int boxCount = 20;
//	Box boxes[boxCount];
//	for(int i = 0;i<boxCount;i++){
//		boxes[i] = Box(random(diLimit),random(diLimit),random(diLimit));
//	}
//	int first = 0;
//	int second = 1;
//	double minVolume = (boxes[first]+boxes[second]).volume();
//	for(int i = 0;i<boxCount - 1;i++){
//		for(int j = i+1;j<boxCount;j++){
//			if(boxes[i]+boxes[j]<minVolume){
//				first = i;
//				second = j;
//				minVolume = (boxes[i]+boxes[j]).volume();
//			}
//		}
//	} 
//	cout<<"The objects that sum to the smallest volume are:";
//	cout<<endl
//		<<"boxes["<<first<<"]";
//	Box::show(boxes[first]);
//	cout<<endl
//		<<"boxes["<<second<<"]";
//	Box::show(boxes[second]);
//	cout<<endl
//		<<"Volume of the sum is "
//		<<minVolume<<endl;
//	return 0;
//}
