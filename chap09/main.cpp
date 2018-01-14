#include <iostream>
/*函数*/
using namespace std;

// 函数声明
//double larger(double a,double b);
//long larger(long a,long b);
//double larger(double a,double b);
//long& larger(long& a,long& b);
// 使用函数模板
template<class T> T larger(T a,T b);

int main(int argc, char** argv) {
//	double a_double = 1.5,b_double = 2.5;
//	float a_float = 3.5f,b_float = 4.5f;
//	long a_long = 15L,b_long = 25L;
//	cout<<endl;
//	cout<<"The larger of double values "
//		<<a_double<<" and "<<b_double<<" is "
//		<<larger(a_double,b_double)<<endl;
//	cout<<"The larger of float values "
//		<<a_float<<" and "<<b_float<<" is "
//		<<larger(a_float,b_float)<<endl;
//	cout<<"The larger of long values "
//		<<a_long<<" and "<<b_long<<" is "		
//		<<larger(a_long,b_long)<<endl;

//	double a_double = 1.5,b_double = 2.5;
//	cout<<endl;
//	cout<<"The larger of double values "
//		<<a_double<<" and "<<b_double<<" is "
//		<<larger(a_double,b_double)<<endl;
//	int a_int = 35,b_int = 25;
//	cout<<"The larger of int values "
//		<<a_int<<" and "<<b_int<<" is "
//		<<larger(static_cast<long>(a_int),static_cast<long>(b_int))
//		<<endl;	

	cout<<endl;
	cout<<"Larger of 1.5 and 2.5 is "<<larger(1.5,2.5)<<endl;
	cout<<"Larger of 3.5 and 4.5 is "<<larger(3.5,4.5)<<endl;
	
	int a_int = 35;
	int b_int = 45;
	cout<<"Larger of "<<a_int<<" and "<<b_int<<" is "
		<<larger(a_int,b_int)
		<<endl;
		
	long a_long = 9;
	long b_long = 8;
	cout<<"Larger of "<<a_long<<" and "<<b_long<<" is "
		<<larger(a_long,b_long)
		<<endl;
	return 0;
}

// 函数定义部分
//double larger(double a,double b){
//	cout<<"double larger() called "<<endl;
//	return a>b?a:b;
//} 
////long larger(long a,long b){
////	cout<<"long larger() called "<<endl;
////	return a>b?a:b;
////}
//long& larger(long& a,long& b){
//	cout<<"long ref larger() called. "<<endl;
//	return a>b?a:b;
//}

template<class T> T larger(T a,T b){
	return a>b?a:b;
}



