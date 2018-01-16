#include <iostream>

/*创建自己的数据类型*/
using namespace std;

// 创建结构体 
struct Book{
	char title[80];
	char author[80];
	char publisher[80];
	int year;
};

//struct Box{
//	double length;
//	double width;
//	double height;
////	double volume(){
////		return length*height*width;
////	}
//	double volume();
//};

//double Box::volume(){
//	return length*height*width;
//}

// 声明函数
//double volume(const Box& aBox); 


//int main(int argc, char** argv) {
//	Box firstBox = {80.0,50.0,40.0};
//	double firstBoxVolume = firstBox.volume();
//	cout<<endl;
//	cout<<"Size of first Box object is "
//		<<firstBox.length<<" by "
//		<<firstBox.width<<" by "		
//		<<firstBox.height
//		<<endl;
//	cout<<"Volume of first Box object is "
//		<<firstBoxVolume
//		<<endl;
//	Box secondBox = firstBox;
//	
//	secondBox.length *= 1.1;
//	secondBox.width *= 1.1;
//	secondBox.height *= 1.1;
//	
//	cout<<"Size of second Box object is "
//		<<secondBox.length<<" by "
//		<<secondBox.width<<" by "
//		<<secondBox.height
//		<<endl;
//	cout<<"Volume of second box object is "
//		<<secondBox.volume()
//		<<endl;
//	cout<<"Increasing the box dimensions by 10% has increased volumn by "
//		<<static_cast<long>((secondBox.volume()-firstBoxVolume)*100/firstBoxVolume)
//		<<" % "
//		<<endl; 
//	return 0;
//}

// 定义函数 
//double volume(const Box& aBox){
//	return aBox.height*aBox.width*aBox.width;
//}
	
	
	
	

