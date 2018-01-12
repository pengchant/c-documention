#include <iostream>
#include <iomanip>
#include <limits>
#include <cctype>
/*chap05ѭ��
1.whileѭ��
2.do while ѭ��
3.for ѭ�� 
*/
using namespace std; 

/*whileѭ������*/
void testWhile(){
	int n = 0;
	cout<<"How many integers do you want to sum:";
	cin>>n;
	
	int sum = 0;
	int i = 1;
	cout<<"Values are: "<<endl;
	while(i<=n){
		cout<<setw(5)<<i;
		if(i%10==0){
			cout<<endl;
		}
		sum+=i++;
	}
	cout<<endl
		<<"Sum is "<<sum<<endl;
}

/*do-whileѭ������*/
void testDoWhile(){
	char ch = 0;
	int count = 0;
	double temperature = 0.0;
	double average = 0.0;
	
	cout<<endl;
	
	do{
		cout<<"Enter a temperature reading:";
		cin>>temperature;
		
		average += temperature;
		count++;
		
		cout<<"Do you want to enter another?(y/n):";		
		cin>>ch;
		cout<<endl;
	}while(tolower(ch)=='y');
	average/=count;
	cout<<"Average temperature is " <<average
		<<endl;
}

/*forѭ��*/
void testFor(){
	int sum = 0;
	int count = 0;
	
	cout<<"How many integers do you want to sum? ";
	cin>>count;
	cout<<endl;
	
	for(int i = 1;i<=count;i++){
		sum+=i;
	}
	cout<<endl
		<<"The sum of the integers from 1 to "<<count
		<<" is "<<sum<<endl;	
}

/*forѭ��������ʹ�ø���������*/
void testForDouble(){
	const double pi = 3.14159265;
	cout<<endl; 
	for(double radius=.2;radius<3.0;radius+=.2){
		cout<<" radius= "
			<<setprecision(numeric_limits<double>::digits10+1)
			<<scientific<<radius
			<<" area= "
			<<setw(10)<<setprecision(6)
			<<fixed<<pi*radius*radius
			<<endl;
	}
}

/*ʹ�ø����ӵĿ��Ʊ��ʽ*/
void useCompxExp(){
	
	int count = 0;
	cout<<endl
		<<"What upper limit would you like? ";
	cin>>count;
	
	cout<<endl
		<<"integer"
		<<"  sum"
		<<"         factorial"
		<<endl;
	
	for(long n = 1,sum=0,factorial = 1;sum+=n,factorial *= n,n<=count;n++){		 
		cout<<setw(4)<<n<<"  "
			<<setw(4)<<sum<<"   "
			<<setw(15)<<factorial
			<<endl;
	}
}

/*ʹ��Ƕ��ѭ����ӡ�˷��ھ���*/
void printChengfa(){
	int table = 0;// ���� 
	const int table_min = 2;// ��С���� 
	const int table_max = 12;// ������� 
	char ch = 0;// ��ǽ����ַ��� 
	do{
		// ��ʾ�û�����table 
		cout<<endl
			<<"What size table would you like( "
			<<table_min<<" to "<<table_max<<" )? ";
		cin>>table;
		cout<<endl; 
		// ��ʾtable����ֵ�Ƿ� 
		if(table<table_min || table >table_max){
			cout<<"Invalid table size entered.Program terminated."
				<<endl;
			exit(1);
		}
		
		//  ������ı��� 
		cout<<"   NO|";
		for(int i = 1;i<=table;i++){
			cout<<" "<<setw(3)<<i<<" |";
		}
		cout<<endl;
		// �������������֮��ļ���� 
		for(int i = 0;i<=table;i++){
			cout<<"------";
		}
		cout<<endl;
		
		// ��ʼ������� 
		for(int i = 1;i<=table;i++){
			cout<<" "<<setw(3)<<i<<" |";
			for(int j=1;j<=table;j++){
				cout<<" "<<setw(3)<<i*j<<" |";
			}			
			cout<<endl;
		}
		
		// ��ʾ�Ƿ���Ҫ�ٴδ�ӡ
		cout<<endl
			<<"Do you want another table(y/n)? " ;
		cin>>ch;
		cout<<endl;		
	}while(tolower(ch)=='y');
}

/*ʹ��continue���*/
void useconitnue(){
	cout<<endl
		<<setw(13)<<"Character "
		<<setw(13)<<"Hexadecimal " 
		<<setw(13)<<"Decimal "
		<<endl;
	cout<<uppercase;
	unsigned char ch = 0;
	do{
		if(!isprint(ch)){
			continue;
		}
		cout<<setw(7)<<ch
			<<hex
			<<setw(13)<<static_cast<int>(ch)
			<<dec
			<<setw(13)<<static_cast<int>(ch)
			<<endl;			
	}while(ch++ < numeric_limits<unsigned char>::max());
}

/*ʹ��break���*/
void usebreak() {
	int table  = 0;
	const int table_min = 2;
	const int table_max = 20;
	const int input_tries = 3;// ���ԵĴ��� 
	char ch = 0;
	
	do{
		for(int count = 1;;count++){
			// ������Ҫ��������� 
			cout<<endl
				<<"What size table would you like ("
				<<table_min<<" to "<<table_max<<")? ";
			cin>>table;
			cout<<endl;
			
			// ����Ĵ����Գ���Ĵ������п��� 
			if(table>=table_min&&table<=table_max){// �ж��Ƿ����������������Ͼ�ͨ�����break��ȥ 
				break;
			}else if(count<input_tries){// �ڹ涨�Ĵ���֮�� 
				cout<<"Invalid input! Try again. ";
			}else{//�����涨�Ĵ��� 
				cout<<"Invalid table size entered for the third time."
					<<"\nSorry ,only three goes-program terminated." 
					<<endl;
				exit(1);
			}
		}
		// �������� 
		cout<<"    NO|" ;
		for(int i = 1;i<=table;i++){
			cout<<"  "<<setw(3)<<i<<" |";			
		}
		cout<<endl;
		// �������������ݵķָ��� 	 
		for(int i = 0;i<=table;i++){
			cout<<"-------";
		}
		cout<<endl;
		// ��������
		for(int i = 1;i<=table;i++){
			cout<<"  "<<setw(3)<<i<<" |";
			for(int j = 1;j<=table;j++){
				cout<<"  "<<setw(3)<<i*j<<" |";
			}
			cout<<endl;
		} 
		
		// ȷ���Ƿ����
		cout<<endl
			<<"Do you want another table (y or n)? "; 
		cin>>ch;  
		cout<<endl;
	}while(tolower(ch)=='y');
}

// ʹ�ò��������Ʊ��ʽ��forѭ�� 
void testExclodeFor(){
	char ch = 0;
	int count = 0;
	double temperature = 0.0;
	double average = 0.0;
	
//	for(;;){
//		cout<<"Enter a value: ";
//		cin>>temperature;
//		average += temperature;
//		count++;
//		
//		cout<<"Do you want to enter another? (y/n)? ";
//		cin>>ch;
//		cout<<endl;
//		
//		if(tolower(ch)=='n'){
//			break;
//		}
//	}

	while(true){
		cout<<"Enter a value: ";
		cin>>temperature;
		average += temperature;
		count++;
		
		cout<<"Do you want to enter another? (y/n)? ";
		cin>>ch;
		cout<<endl;
		
		if(tolower(ch)=='n'){
			break;
		}
	}
	cout<<endl
		<<"The average temperature is "<<average/count
		<<endl;
}

int main(int argc, char** argv) {
//	testWhile();
//	testDoWhile();
//	testFor();
//	testForDouble();
//	useCompxExp();
//	printChengfa(); 
//	useconitnue();
//	usebreak();
	testExclodeFor();
	return 0;
}
