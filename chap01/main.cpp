#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::abs;
using std::div;
using std::rand;
using std::srand;
using std::time;



/*算术运算测试*/
void testCalculate(){
	cout<<setw(10)<<10+20<<endl;
	cout<<setw(10)<<10-5<<endl;
	cout<<setw(10)<<10-2<<endl;
	
	cout<<setw(10)<<10*20<<endl;
	cout<<setw(10)<<10/3<<endl;
	cout<<setw(10)<<10%3<<endl;
	cout<<setw(10)<<10%-3<<endl;
	cout<<setw(10)<<-10%3<<endl;
	cout<<setw(10)<<-10%-3<<endl;
	
	cout<<setw(10)<<10+20/10-5<<endl;
	cout<<setw(10)<<(10+20)/(10-5)<<endl;
	cout<<setw(10)<<10+20/(10-5)<<endl;
	cout<<setw(10)<<(10+20)/10-5<<endl;
	
	cout<<setw(10)<<4*5/3%4+7/3<<endl;	
}

/*赋值运算符*/ 
void fuzhitest(){
	int apples = 10;
	int oranges = 6;
	int boys = 4;
	int girls = 4;
	
	int fruit_per_child = (apples+oranges)/(boys+girls);
	
	cout<<endl
		<<" Each child gets "
		<<fruit_per_child<<" fruit.";
	cout<<endl;	
}

/*使用整形变量*/
void testIntType(){
	int apples = 10;
	int children = 3;
	
	cout<<endl
		<<"Each child gets "
		<<apples/children
		<<" firut.";
		
	cout<<endl
		<<"We have "
		<<apples % children 
		<<" left over.";
		
	cout<<endl;	
}

/*测试自增运算符*/
void testzizeng(){
	int count = 5;
	int total = 6+count++;
	cout<<total<<endl;
	cout<<" count= "<<count<<endl;
	
	count = 5;
	total = (++count)+6;
	cout<<total<<endl;
	cout<<" count= "<<count<<endl;
}

/*测试const关键字*/
void testconst(){
	const int inches_per_foot=12;
	const int feet_per_yard = 3;
	int yards = 0;
	int feet = 0;
	int inches = 0;
	
	cout<<"Enter a length as yards,feet,and inches: ";
	cin>>yards>>feet>>inches;
	
	cout<<endl
		<<"Length is inches is "
		<<inches+inches_per_foot*(feet+feet_per_yard*yards)
		<<endl;	 
}

/*使用函数*/
void testfunc(){
	int value = -20;
	int result = abs(value);
	cout<<result<<endl;
	
	value = 93;
	int divisor = 17;
	div_t results = div(value,divisor);
	cout<<"\nQuctient is "<<results.quot;
	cout<<"\nRemainder is "<<results.rem;
	
}

/*测试生成随机数*/
void testrand(){
	int random_value =0u;
	for(int i = 0;i<20;i++){
		random_value = rand();
		cout<<"生成的随机数为："<<random_value<<endl;	 	
	}	
}

/*随机数的生成*/
void testMyrandom(){
	const int limit1 = 500;
	const int limit2 = 31;
	
	cout<<"First we will use the default sequence from rand()."<<endl;
	cout<<"Three random integer from 0 to "<<RAND_MAX<<" : "
		<<rand()<<"  "<<rand()<<"  "<<rand()<<endl;
		
	cout<<endl<<"Now we will use a new seed for rand()."<<endl;
	srand((unsigned int)time(0));
	
	cout<<"Three random integer from 0 to "<<RAND_MAX<<" : "	
		<<rand()<<"  "<<rand()<<"  "<<rand()<<endl;
}

int main(int argc, char** argv) {
//	cout<<"hello,c++!"<<endl;
//	
//	cout<<"\x99A"<<endl;
//	cout<<"\XE3"<<endl;
//	cout<<"\165"<<endl;
	
//	cout<<"\n\"Least said \n\t\tsoonest mended.\"\n\a";	

//	testCalculate();

// 	testIntType();

//	fuzhitest();

//	testzizeng(); 

//	testconst(); 

//	testfunc();

//	testrand();
	testMyrandom();
	
	return 0;
}
