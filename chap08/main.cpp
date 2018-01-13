#include <iostream>
#include <iomanip>
/*使用函数编程*/
using namespace std; 

/*函数声明*/
double power(double,int);
double change_it(double it);
double change_it(double* pointer_to_it);
double average(double array[],int count);
double average2(double* array,int count);
double yield(double array[][4],int count);
int larger(int& m,int& n);


int main(int argc, char** argv) {
//	cout<<endl;
//	for(int i = -3;i<=3;i++){
//		cout<<setw(10)<<power(8.0,i);
//	}
//	cout<<endl;

//	double it = 5.0;
//	double result = change_it(it); 
//	cout<<"After function execution,it = "<<it<<endl
//		<<"Result returned is "<<result<<endl;

//	double it = 5.0;
//	double result = change_it(&it);
//	cout<<"After function execution,it = "<<it<<endl
//		<<"Result returned is "<<result<<endl;

//	double values[] = {
//		1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0
//	};
//	cout<<endl
//		<<" Average= "
//		<<average(values,(sizeof values)/(sizeof values[0]))
//		<<endl;

//	double values[] = {
//		1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0
//	};
//	cout<<endl
//		<<" Average= "
//		<<average2(values,(sizeof values)/(sizeof values[0]))
//		<<endl;

//	double beans[3][4] = {
//		{
//			1.0,2.0,3.0,4.0
//		},
//		{
//			5.0,6.0,7.0,8.0
//		},
//		{
//			9.0,10.0,11.0,12.0
//		}
//	};
//	cout<<endl
//		<<"Yield = "<<yield(beans,sizeof beans/sizeof beans[0])
//		<<endl;

	int value1 =10;
	int value2 = 20;
	cout<<"Before:"<<"value1 = "<<value1
		<<" , value2 = "<<value2<<endl;
	cout<<endl
		<<larger(value1,value2)
		<<endl;
	cout<<"After:"<<"value1 = "<<value1
		<<" , value2 = "<<value2<<endl;
//	const int a = 10;
//	larger(value1,a); // 这里运行不通过！得到一个重要结论：
	// ***当函数的参数制定为非常量引用时，不能把常量作为参数传递给函数 
	return 0;
}

/*使用函数*/
double power(double x,int n) {
	double result = 1.0;
	if(n>=0){
		for(int i = 0;i<n;i++){
			result *= x;
		}
	}else{
		for(int i = 0;i<-n;i++){
			result /= x;
		}
	}
	return result;
}

/*给函数传送变元*/
double change_it(double it){
	it+=10.0;
	cout<<endl
		<<"Within function,it= "<<it<<endl;
	return it;		
}

/*给函数传递指针*/
double change_it(double* pit){
	*pit += 10.0;
	cout<<endl
		<<"Within function,*pit= "<<*pit<<endl;
	return *pit;
}

/*把数组作为参数的参数传送*/
double average(double array[],int count){
	double sum = 0.0;
	for(int i = 0;i<count;i++){
		sum += array[i];
	}
	return sum/count;
}

/*传送数组时，使用指针表示法*/
double average2(double* array,int count){
	double sum = 0;
	for(int i = 0;i<count;i++){
		sum += *(array+i);
	}
	return sum/count;
}

/*传送多维数组*/
double yield(double array[][4],int count){
	double sum = 0.0;
	for(int i = 0;i<count;i++){
		for(int j = 0;j<4;j++){
			sum += array[i][j];
		}
	}
	return sum;
}

/*引用参数*/
int larger(int& m,int& n){
	n = 30;
 	return m>n?m:n;
}


