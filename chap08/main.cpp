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
//	larger(value1,a); // �������в�ͨ�����õ�һ����Ҫ���ۣ�
	// ***�������Ĳ����ƶ�Ϊ�ǳ�������ʱ�����ܰѳ�����Ϊ�������ݸ����� 
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


