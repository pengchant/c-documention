#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>

using namespace std;
extern int shared_value;

/*确定类型*/
void testSizeOf(){
	cout<<endl
		<<"Size of type int is "
		<<sizeof(int);
	
	cout<<endl
		<<"Size of type long double is "
		<<sizeof(long double);
	
	long number = 999999999;
	cout<<endl
		<<"Size of the variable number is "
		<<sizeof(number);
}

/*确定数据类型占用的字节数*/
void testNum(){
	cout<<endl
		<<"Size of type char is "
		<<sizeof(char);
	cout<<endl
		<<"Size of type short is "
		<<sizeof(short);
	cout<<endl
		<<"Size of type int is "
		<<sizeof(int);
	cout<<endl
		<<"Size of type long is "
		<<sizeof(long);	
	cout<<endl
		<<"Size of type float is "
		<<sizeof(float);
	cout<<endl
		<<"Size of type double is "
		<<sizeof(double);
	cout<<endl
		<<"Size of type long double is "
		<<sizeof(long double);
	cout<<endl;	
}

/*确定数值的上下限*/
void expLimits(){
//	cout<<endl
//		<<"Maximum value of type double is "
//		<<numeric_limits<double>::max();
	cout<<endl
		<<"The range for type short is from "
		<<numeric_limits<short>::min()
		<<" to "
		<<numeric_limits<short>::max();
	cout<<endl
		<<"The range for type int is from "
		<<numeric_limits<int>::min()
		<<" to "
		<<numeric_limits<int>::max();
	cout<<endl
		<<"The range for type long is from "		
		<<numeric_limits<long>::min()
		<<" to "
		<<numeric_limits<long>::max();
	cout<<endl
		<<"The range for type float is from "
		<<numeric_limits<float>::min()
		<<" to "
		<<numeric_limits<float>::max();
	cout<<endl
		<<"The range for type double is from "		
		<<numeric_limits<double>::min() 
		<<" to "
		<<numeric_limits<double>::max();
	cout<<endl
		<<"The range for type long double is from "
		<<numeric_limits<long double>::min()
		<<" to "
		<<numeric_limits<long double>::max();
	cout<<endl;
}

/*按位运算符*/
void testAnWei(){
//	unsigned short number = 16387U;
//	unsigned short result = number<<2;	
//	cout<<endl
//		<<result;
//	result = number>>2;
//	cout<<endl
//		<<result;
	
	char value = -104;
	value >>=2;
	cout<<endl
		<<value;
}

/*使用按位运算符*/ 
void useAnwei(){
	unsigned long red = 0xFF0000UL;
	unsigned long white = 0xFFFFFFUL;
	
	cout<<hex;
	cout<<setfill('0');
	
	cout<<"\nTry out bitwise ADN and OR operators.";
	cout<<"\nInitial value red ="<<setw(8)<<red<<endl;
	cout<<"\nComplement ~red ="<<setw(8)<<~red;
	
	cout<<"\nInitial value white ="<<setw(8)<<white<<endl;
	cout<<"\nComplement ~white ="<<setw(8)<<~white;
	
	
	cout<<"\n\nNow we can try out successive exclusive OR operations.";
	
	unsigned long mask = red^white;
	
	cout<<"\n mask=red^white= "<<setw(8)<<mask;
	cout<<"\n mask^red= "<<setw(8)<<(mask^red);
	cout<<"\n mask^white= "<<setw(8)<<(mask^white);
	
	unsigned long flags = 0xFF;
	unsigned long bit1mask = 0x1;
	unsigned long bit6mask = 0x20;
	unsigned long bit20mask = 0x80000;
	
	cout<<"\n\nNow use masks to select or set a particular flag bit.";
	cout<<"\nSelect bit 1 from flags :"<<setw(8)<<(flags&bit1mask);
	cout<<"\nSelect bit 6 from flags :"<<setw(8)<<(flags&bit6mask);
	cout<<"\nSwitch off bit 6 in flags :"<<setw(8)<<(flags&=~bit6mask);
	cout<<"\nSwitch on bit 20 in flags :"<<setw(8)<<(flags|=bit20mask);
	cout<<endl; 
	
}
 

/*测试枚举类型*/
void enumTest(){
	enum Language {
		English,
		French,
		German,
		Italian,
		Spanish
	};
	cout<<"\nPossible languages are:\n"
		<<English<<".English\n"
		<<French<<".French\n"
		<<German<<".German\n"
		<<Italian<<".Italian\n"
		<<Spanish<<".Spanish\n";
	Language tongue = German;
	cout<<"\n Current language is "<<tongue;
	
	tongue = static_cast<Language>(tongue+1);
	cout<<"\n Current language is now "<<tongue
		<<endl;
	
}

/*变量的生存周期*/
void varlifeTest(){
	int count1 = 10;
	int count3 = 50;
	
	cout<<endl
		<<"Value of outer count1 = "<<count1;// 10
	{
		int count1 = 20;
		int count2 = 30;
		cout<<endl
			<<"Value of inner count1= "<<count1;//20
		count1+=3;//count1 = 23
		count3+=count2;//count3 = 80;
	}
	cout<<endl
		<<"Value of outer count1= "<<count1//10
		<<endl
		<<"Value of outer count3= "<<count3;//80
	cout<<endl;
}

/*作用域解系运算符*/
int count1 = 100;
void testZuoYongYV(){
	int count1 = 10;
	int count3 = 50;
	cout<<endl<<"Value of outer count1 = "<<count1;// 10
	cout<<endl<<"Value of global count1 = "<<::count1; // 100
	{
		int count1 = 20;
		int count2 = 30;
		cout<<endl<<"Value of innner count1= "<<count1;// 20
		cout<<endl<<"Value of global count1 = "<<::count1;// 100
		count1+=3;// 23
		count3+=count2;// 80
	}
	cout<<endl
		<<"Value of outer count1 = "<<count1// 10
		<<endl
		<<"Value of outer count3 = "<<count3;// 80
		
	cout<<endl;
}

/*声明外部变量*/ 

int main(int argc, char** argv) {
//	testSizeOf();
//	testNum();
//	expLimits();
//	testAnWei();
//	useAnwei();
//  long double value = 1234.4567890123d;
//	cout<<setprecision(5)<<value;
//	enumTest();
//	varlifeTest();
//	testZuoYongYV();
	cout<<"获取到的file1的shared_value的值为："<<shared_value+10<<endl;
	return 0;
}
