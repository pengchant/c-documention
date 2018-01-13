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
double* largest(double data[],int count);
double* smallest(double data[],int count); 
long next_Fibonacci();
/*使用多个默认参数值*/
void show_data(const int data[],int count = 1,
	const string& title = "Data values",
	int width = 10,int perLine = 5);
void show_data(const double data[],int count = 1,
	const string& title = "Data values",
	int width = 10,int perLine = 5);


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

//	int value1 =10;
//	int value2 = 20;
//	cout<<"Before:"<<"value1 = "<<value1
//		<<" , value2 = "<<value2<<endl;
//	cout<<endl
//		<<larger(value1,value2)
//		<<endl;
//	cout<<"After:"<<"value1 = "<<value1
//		<<" , value2 = "<<value2<<endl;
//	const int a = 10;
//	larger(value1,a); // 这里运行不通过！得到一个重要结论：
	// ***当函数的参数制定为非常量引用时，不能把常量作为参数传递给函数 
	
//	for(int i=0;i<argc;i++){
//		cout<<endl<<argv[i]<<endl;
//	}
//	cout<<endl;

//	int samples[] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int dataItem = 90;
//	show_data(&dataItem); 
//	dataItem = 13;
//	show_data(&dataItem,1,"Unlucky for some!"); 
//	show_data(samples,sizeof samples/sizeof samples[0]);
//	show_data(samples,sizeof samples/sizeof samples[0],"samples");
//	show_data(samples,sizeof samples/sizeof samples[0],"samples",14);
//	show_data(samples,sizeof samples/sizeof samples[0],"samples",14,4);
	
//	// 定义一组数 
//	double samples[] = {
//		11.0,23.0,13.0,4.0,
//		57.0,36.0,317.0,88.0,
//		9.0,100.00,121.0,12.0
//	};
//	// 获取元素数组的个数 
//	const int count = sizeof samples/sizeof samples[0];
//	// 输出值 width 和 preLine按照默认值处理 
//	show_data(samples,count,"Original values");
//	// 获取最小值 
//	int min = *smallest(samples,count);
//	// 每个值减去最小值 
//	for(int i = 0;i < count;i++){
//		samples[i] -= min;
//	}
//	// 获取最大值 
//	int max = *largest(samples,count);
//	// 每个值除以最大值 
//	for(int i = 0;i < count;i++){
//		samples[i] /= max;
//	}
//	// 输出结果 
//	show_data(samples,count,"Normalized Values",12); 


	cout<<endl
		<<"The Fibonacci Series"
		<<endl;
	for(int i = 0;i<30;i++){
		if(i%5==0){
			cout<<endl;
		}
		cout<<setw(12)<<next_Fibonacci();
	}
	cout<<endl;
	
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

/*用多个默认参数值*/ 
void show_data(const int data[],int count,const string& title,int width,int perLine){
	cout<<endl<<title; 
	for(int i = 0;i<count;i++){
		if(i%perLine == 0){
			cout<<endl; 
		}
		cout<<setw(width)<<data[i];
	}
	cout<<endl;		
}
void show_data(const double data[],int count,const string& title,int width,int perLine){
	cout<<endl<<title; 
	for(int i = 0;i<count;i++){
		if(i%perLine == 0){
			cout<<endl; 
		}
		cout<<setw(width)<<data[i];
	}
	cout<<endl;		
}

/*返回最大值的指针*/
double* largest(double data[],int count){
	int index_max = 0;
	for(int i = 1;i<count;i++){
		if(data[index_max]<data[i]){
			index_max = i;
		}
	}
	return &data[index_max];
}

/*返回最小值的指针*/ 
double* smallest(double data[],int count){
	int index_min = 0;
	for(int i =1;i<count;i++){
		if(data[index_min]>data[i]){
			index_min = i;
		}
	}
	return &data[index_min];
}

/*斐波那契级数*/
long next_Fibonacci(){
	static long last = 0;
	static long last_but_one = 1; 
	long next = last+last_but_one;
	last_but_one = last;
	last = next;	
	return last;
}


