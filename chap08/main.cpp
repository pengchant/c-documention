#include <iostream>
#include <iomanip>
/*ʹ�ú������*/
using namespace std; 

/*��������*/
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
/*ʹ�ö��Ĭ�ϲ���ֵ*/
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
//	larger(value1,a); // �������в�ͨ�����õ�һ����Ҫ���ۣ�
	// ***�������Ĳ����ƶ�Ϊ�ǳ�������ʱ�����ܰѳ�����Ϊ�������ݸ����� 
	
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
	
//	// ����һ���� 
//	double samples[] = {
//		11.0,23.0,13.0,4.0,
//		57.0,36.0,317.0,88.0,
//		9.0,100.00,121.0,12.0
//	};
//	// ��ȡԪ������ĸ��� 
//	const int count = sizeof samples/sizeof samples[0];
//	// ���ֵ width �� preLine����Ĭ��ֵ���� 
//	show_data(samples,count,"Original values");
//	// ��ȡ��Сֵ 
//	int min = *smallest(samples,count);
//	// ÿ��ֵ��ȥ��Сֵ 
//	for(int i = 0;i < count;i++){
//		samples[i] -= min;
//	}
//	// ��ȡ���ֵ 
//	int max = *largest(samples,count);
//	// ÿ��ֵ�������ֵ 
//	for(int i = 0;i < count;i++){
//		samples[i] /= max;
//	}
//	// ������ 
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

/*ʹ�ú���*/
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

/*���������ͱ�Ԫ*/
double change_it(double it){
	it+=10.0;
	cout<<endl
		<<"Within function,it= "<<it<<endl;
	return it;		
}

/*����������ָ��*/
double change_it(double* pit){
	*pit += 10.0;
	cout<<endl
		<<"Within function,*pit= "<<*pit<<endl;
	return *pit;
}

/*��������Ϊ�����Ĳ�������*/
double average(double array[],int count){
	double sum = 0.0;
	for(int i = 0;i<count;i++){
		sum += array[i];
	}
	return sum/count;
}

/*��������ʱ��ʹ��ָ���ʾ��*/
double average2(double* array,int count){
	double sum = 0;
	for(int i = 0;i<count;i++){
		sum += *(array+i);
	}
	return sum/count;
}

/*���Ͷ�ά����*/
double yield(double array[][4],int count){
	double sum = 0.0;
	for(int i = 0;i<count;i++){
		for(int j = 0;j<4;j++){
			sum += array[i][j];
		}
	}
	return sum;
}

/*���ò���*/
int larger(int& m,int& n){
	n = 30;
 	return m>n?m:n;
}

/*�ö��Ĭ�ϲ���ֵ*/ 
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

/*�������ֵ��ָ��*/
double* largest(double data[],int count){
	int index_max = 0;
	for(int i = 1;i<count;i++){
		if(data[index_max]<data[i]){
			index_max = i;
		}
	}
	return &data[index_max];
}

/*������Сֵ��ָ��*/ 
double* smallest(double data[],int count){
	int index_min = 0;
	for(int i =1;i<count;i++){
		if(data[index_min]>data[i]){
			index_min = i;
		}
	}
	return &data[index_min];
}

/*쳲���������*/
long next_Fibonacci(){
	static long last = 0;
	static long last_but_one = 1; 
	long next = last+last_but_one;
	last_but_one = last;
	last = next;	
	return last;
}


