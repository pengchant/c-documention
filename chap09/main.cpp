#include <iostream>
#include <iomanip>
/*����*/
using namespace std;

// ��������
//double larger(double a,double b);
//long larger(long a,long b);
//double larger(double a,double b);
//long& larger(long& a,long& b);
// ʹ�ú���ģ��
template<class T> T larger(T a,T b);
template<> long* larger<long*>(long* a,long* b);// ʹ����ȷ��˵�� 
template<class T> T larger(const T array[],int count);// ����ģ�� 
template<class TReturn,class TArg> TReturn larger(TArg a,TArg b);// ���ж��������ģ�� 
// ����ָ��
long sum(long a,long b);
long product(long a,long b);
// ���ͺ���ָ��
double squared(double);
double cubed(double);
double sum_array(double array[],int len,double (*pfun)(double));
// �ݹ麯��
double power(double x,int n);
// ��ȡ�ַ����еĵ��ʲ�����
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

	 
	 
	// ����������и��ַ� 
	string text;
	const string separators = " ,.\"\n";
	// ��ʾ�û����ն������ַ��� 
	cout<<endl
		<<"Enter a string terminated by#: "<<endl;
	getline(cin,text,'#');
	// �ۼƾ����е��ʵĸ��� 
	int word_count = count_words(text,separators);
	// ������ʵĸ���Ϊ0��ʾû�е��� 
	if(0 == word_count){
		cout<<endl
			<<"No words in text."
			<<endl;
	}
	// �и��������� 
	string** pWords = new string*[word_count];
	extract_words(pWords,text,separators);
	sort(pWords,0,word_count-1);
	show_words(pWords,word_count); 
	// �ͷſռ�
	for(int i = 0;i<word_count;i++){
		delete pWords[i];
	} 
	delete [] pWords;
	return 0;
}

// �������岿��
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

// ����ģ���˵��
template<> long* larger<long*>(long* a,long* b){
	cout<<"specialized version"<<endl;
	return *a>*b?a:b;
} 
// �ҳ������е�����һ��Ԫ�� 
template<class T> T larger(const T array[],int count){
	T result = array[0];
	for(int i = 1;i<count;i++){
		if(array[i]>result){
			result = array[i];
		}
	}
	return result;
} 
// ���ж��������ģ��
template<class TReturn,class TArg> TReturn larger(TArg a,TArg b){
	return a>b?a:b;
} 

long product(long a,long b){
	return a*b;
}

long sum(long a,long b){
	return a+b;
}

// ���ͺ���ָ��
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

// ����ָ�������
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


// ��ȡ�ַ���������
void swap(string* pStr[],int first,int second){
	string* temp = pStr[first];
	pStr[first] = pStr[second];
	pStr[second] = temp;
} 
// ���������㷨(�ݹ�ʵ��) 
void sort(string* pStr[],int start,int end){
	// �˳��ݹ������ 
	if(start<end){
		return;
	} 
	// start��middle����λ�ÿ��Կ�������ֵ(�����start�����ڱ�������)
	swap(pStr,start,(start+end)/2);
	int current = start; 
	// ���α���start�����Ԫ�أ��������Ԫ�ر�startС�ͽ�������һ����ַ���start+1,�ڶ���Ϊstart+2...�������� 
	for(int i = start+1;i<=end;i++){ 
		if(*(pStr[i])<*(pStr[start])){
			swap(pStr,++current,i);
		}
	}
	// ����start��λ�ú�current��λ�ý��� 
	swap(pStr,start,current);
	// �ݹ������ߺ��ұ� 
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




