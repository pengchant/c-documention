#include <iostream>
#include <iomanip>
/*函数*/
using namespace std;

// 函数声明
//double larger(double a,double b);
//long larger(long a,long b);
//double larger(double a,double b);
//long& larger(long& a,long& b);
// 使用函数模板
template<class T> T larger(T a,T b);
template<> long* larger<long*>(long* a,long* b);// 使用明确的说明 
template<class T> T larger(const T array[],int count);// 重载模板 
template<class TReturn,class TArg> TReturn larger(TArg a,TArg b);// 带有多个参数的模板 
// 函数指针
long sum(long a,long b);
long product(long a,long b);
// 传送函数指针
double squared(double);
double cubed(double);
double sum_array(double array[],int len,double (*pfun)(double));
// 递归函数
double power(double x,int n);
// 截取字符串中的单词并排序
void swap(string* pStr[],int first,int second);
void sort(string* pStr[],int start,int end);
int count_words(const string& text,const string& separators);
void extract_words(string* pStr[],const string& text,const string& separators);
void show_words(string* pStr[],int count);

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



//	cout<<endl;
//	cout<<"Larger of 1.5 and 2.5 is "<<larger(1.5,2.5)<<endl;
//	cout<<"Larger of 3.5 and 4.5 is "<<larger(3.5,4.5)<<endl;
//	
//	int a_int = 35;
//	int b_int = 45;
//	cout<<"Larger of "<<a_int<<" and "<<b_int<<" is "
//		<<larger(a_int,b_int)
//		<<endl;
//		
//	long a_long = 9;
//	long b_long = 8;
//	cout<<"Larger of "<<a_long<<" and "<<b_long<<" is "
//		<<larger(a_long,b_long)
//		<<endl;
//		
//	cout<<"Larger of "<<a_long<<" and "<<b_long<<" is "
//		<<*larger(&a_long,&b_long)
//		<<endl;


//	double x[] = {10.5,12.5,2.5,13.5,5.5};
//	cout<<"Largest element has the value "
//		<<larger(x,sizeof x/sizeof x[0])
//		<<endl;


//	cout<<"Larger of 1.5 and 2.5 is "
//		<<larger<int>(1.5,2.5)
//		<<endl;
//		cout<<"Larger of 1.5 and 2.5 is "
//		<<larger<double,double>(1.5,2.5)
//		<<endl;

	
//	long (*pDo_it)(long,long) = 0;
//	pDo_it = product;
//	cout<<endl
//		<<"3*5= "<<pDo_it(3,5);
//	pDo_it = sum;
//	cout<<endl
//		<<"3*(4+5)+6= "
//		<<pDo_it(product(3,pDo_it(4,5)),6)
//		<<endl;


//	double array[] = {
//		1.5,2.5,3.5,4.5,5.5,6.5,7.5
//	};
//	int len = sizeof array/ sizeof array[0];
//	
//	cout<<endl
//		<<"Sum of squares = "
//		<<sum_array(array,len,squared)
//		<<endl;
//		
//	cout<<"Sum of cubes = "
//		<<sum_array(array,len,cubed)
//		<<endl;


//	cout<<endl;
//	for(int i = -3;i<=3;i++){
//		cout<<setw(10)
//			<<power(8.0,i); 
//	}
//	cout<<endl;

	 
	 
	// 定义变量和切割字符 
	string text;
	const string separators = " ,.\"\n";
	// 提示用户在终端输入字符串 
	cout<<endl
		<<"Enter a string terminated by#: "<<endl;
	getline(cin,text,'#');
	// 累计句子中单词的个数 
	int word_count = count_words(text,separators);
	// 如果单词的个数为0表示没有单词 
	if(0 == word_count){
		cout<<endl
			<<"No words in text."
			<<endl;
	}
	// 切割单词排序并输出 
	string** pWords = new string*[word_count];
	extract_words(pWords,text,separators);
	sort(pWords,0,word_count-1);
	show_words(pWords,word_count); 
	// 释放空间
	for(int i = 0;i<word_count;i++){
		delete pWords[i];
	} 
	delete [] pWords;
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

// 定义模板的说明
template<> long* larger<long*>(long* a,long* b){
	cout<<"specialized version"<<endl;
	return *a>*b?a:b;
} 
// 找出数组中的最大的一个元素 
template<class T> T larger(const T array[],int count){
	T result = array[0];
	for(int i = 1;i<count;i++){
		if(array[i]>result){
			result = array[i];
		}
	}
	return result;
} 
// 带有多个参数的模板
template<class TReturn,class TArg> TReturn larger(TArg a,TArg b){
	return a>b?a:b;
} 

long product(long a,long b){
	return a*b;
}

long sum(long a,long b){
	return a+b;
}

// 传送函数指针
double squared(double x) {
	return x*x;
}

double cubed(double x){
	return x*x*x;
}

double sum_array(double array[],int len,double (*pfun)(double)){
	double total = 0.0;
	for(int i = 0;i<len;i++){
		total += pfun(array[i]);
	}
	return total;
}

// 函数指针的数组
//double sum(double,double);
//double product(double,double);
//double difference(double,double);
//double (*pfun[3])(double,double) = {
//	sum,product,difference
//};

double power(double x,int n){
	if(n == 0){
		return 1.0;
	}
	if(0<n){
		return x*power(x,n-1);
	}else{
		return 1.0/power(x,-n);
	}
}


// 截取字符串并排序
void swap(string* pStr[],int first,int second){
	string* temp = pStr[first];
	pStr[first] = pStr[second];
	pStr[second] = temp;
} 
// 快速排序算法(递归实现) 
void sort(string* pStr[],int start,int end){
	// 退出递归的条件 
	if(start<end){
		return;
	} 
	// start与middle交换位置可以看做交换值(这里的start起到了哨兵的作用)
	swap(pStr,start,(start+end)/2);
	int current = start; 
	// 依次便利start后面的元素，若后面的元素比start小就交换：第一个地址变成start+1,第二个为start+2...依次类推 
	for(int i = start+1;i<=end;i++){ 
		if(*(pStr[i])<*(pStr[start])){
			swap(pStr,++current,i);
		}
	}
	// 最后把start的位置和current的位置交换 
	swap(pStr,start,current);
	// 递归调用左边和右边 
	sort(pStr,start,current-1);
	sort(pStr,current+1,end);
}

int count_words(const string& text,const string& separators){
	size_t start = text.find_first_not_of(separators);
	size_t end = 0;
	int word_count = 0;
	while(start != string::npos){
		end = text.find_first_of(separators,start+1);
		if(end == string::npos){
			end = text.length();
		}
		word_count++;
		start = text.find_first_not_of(separators,end+1);
	}
	return word_count;
}

void extract_words(string* pStr[],const string& text,const string& separators){
	size_t start = text.find_first_not_of(separators);
	size_t end = 0;
	int index = 0;
	while(start != string::npos){
		end = text.find_first_of(separators,start+1);
		if(end == string::npos){
			end = text.length();
		}
		pStr[index++] = new string(text.substr(start,end-start));
		start = text.find_first_not_of(separators,end+1);
	}
}

void show_words(string* pStr[],int count){
	const int words_per_line = 5;
	cout<<endl
		<<"  "
		<<*pStr[0];
	int words_in_line = 0;
	for(int i = 1;i<count; i++){
		if((*pStr[i])[0] != (*pStr[i-1])[0] || 
				words_in_line++ == words_per_line){
			words_in_line = 0;
			cout<<endl;
		} 
		cout<<"  "<<*pStr[i];
	}	 
	cout<<endl;
}




