//#include <iostream>
//
//using namespace std;
//
//class Box{
//	public:
//		double length;
//		double width;
//		double height;
//		
//		// ¹¹Ôìº¯Êý
//		Box(double lengthValue,double widthValue,double heightValue){
//			cout<<"Box constructor called."<<endl;
//			length = lengthValue;
//			width = widthValue;
//			height = heightValue;
//		}
//		
//		double volume(){
//			return length*width*height;
//		}
//};
//
//int main() {
//	Box firstBox(80.0,50.0,40.0);
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
//	secondBox.length *= 1.1;
//	secondBox.width *= 1.1;
//	secondBox.height *= 1.1;
//	cout<<"Size of second Box object is "
//		<<secondBox.length<<" by "
//		<<secondBox.width<<" by "
//		<<secondBox.height
//		<<endl;
//	cout<<"Volume of second Box object is "
//		<<secondBox.volume()
//		<<endl;
//	
//	cout<<"Increasing the box dimensions by 10% has increased the volume by "
//		<<static_cast<long>((secondBox.volume() - firstBoxVolume)*100/firstBoxVolume)
//		<<"% "
//		<<endl;  
//	return 0;
//}
