#include <iostream>
#include <iomanip>
#include <limits>
#include <cctype>
/*chap05循环
1.while循环
2.do while 循环
3.for 循环 
*/
using namespace std; 

/*while循环测试*/
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

/*do-while循环测试*/
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

/*for循环*/
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

/*for循环控制中使用浮点数变量*/
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

/*使用更复杂的控制表达式*/
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

/*使用嵌套循环打印乘法口诀表*/
void printChengfa(){
	int table = 0;// 行数 
	const int table_min = 2;// 最小行数 
	const int table_max = 12;// 最大行数 
	char ch = 0;// 标记结束字符串 
	do{
		// 提示用户输入table 
		cout<<endl
			<<"What size table would you like( "
			<<table_min<<" to "<<table_max<<" )? ";
		cin>>table;
		cout<<endl; 
		// 提示table输入值非法 
		if(table<table_min || table >table_max){
			cout<<"Invalid table size entered.Program terminated."
				<<endl;
			exit(1);
		}
		
		//  创建表的标题 
		cout<<"   NO|";
		for(int i = 1;i<=table;i++){
			cout<<" "<<setw(3)<<i<<" |";
		}
		cout<<endl;
		// 标题与具体数据之间的间隔线 
		for(int i = 0;i<=table;i++){
			cout<<"------";
		}
		cout<<endl;
		
		// 开始输出数据 
		for(int i = 1;i<=table;i++){
			cout<<" "<<setw(3)<<i<<" |";
			for(int j=1;j<=table;j++){
				cout<<" "<<setw(3)<<i*j<<" |";
			}			
			cout<<endl;
		}
		
		// 提示是否需要再次打印
		cout<<endl
			<<"Do you want another table(y/n)? " ;
		cin>>ch;
		cout<<endl;		
	}while(tolower(ch)=='y');
}

/*使用continue语句*/
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

/*使用break语句*/
void usebreak() {
	int table  = 0;
	const int table_min = 2;
	const int table_max = 20;
	const int input_tries = 3;// 尝试的次数 
	char ch = 0;
	
	do{
		for(int count = 1;;count++){
			// 输入想要输出的数量 
			cout<<endl
				<<"What size table would you like ("
				<<table_min<<" to "<<table_max<<")? ";
			cin>>table;
			cout<<endl;
			
			// 下面的代码块对出错的次数进行控制 
			if(table>=table_min&&table<=table_max){// 判断是否符合条件，如果符合就通过检测break出去 
				break;
			}else if(count<input_tries){// 在规定的次数之内 
				cout<<"Invalid input! Try again. ";
			}else{//超过规定的次数 
				cout<<"Invalid table size entered for the third time."
					<<"\nSorry ,only three goes-program terminated." 
					<<endl;
				exit(1);
			}
		}
		// 创建标题 
		cout<<"    NO|" ;
		for(int i = 1;i<=table;i++){
			cout<<"  "<<setw(3)<<i<<" |";			
		}
		cout<<endl;
		// 创建标题与数据的分割线 	 
		for(int i = 0;i<=table;i++){
			cout<<"-------";
		}
		cout<<endl;
		// 创建数据
		for(int i = 1;i<=table;i++){
			cout<<"  "<<setw(3)<<i<<" |";
			for(int j = 1;j<=table;j++){
				cout<<"  "<<setw(3)<<i*j<<" |";
			}
			cout<<endl;
		} 
		
		// 确认是否继续
		cout<<endl
			<<"Do you want another table (y or n)? "; 
		cin>>ch;  
		cout<<endl;
	}while(tolower(ch)=='y');
}

// 使用不包含控制表达式的for循环 
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
