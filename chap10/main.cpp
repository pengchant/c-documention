#include <iostream>
#include <iomanip>
#include <string>
#include "data.h"
//#include "compare.h"
#include "tempcomp.h"
#include "normalize.h"

/*程序文件和预处理指令*/
using namespace std;
using namespace datah;
using tcompare::max;
using tcompare::min;
//using compare::max;
//using compare::min; 


//namespace data{
//	extern const double pi;
//	extern const std::string days[];
//}

// 声明外部变量
extern float phi;
extern const double pi;
extern const string days[];
extern int count;
 
int main(int argc, char** argv) {
//	cout<<setprecision(3)<<fixed;
//	cout<<endl
//		<<"To 3 decimal places..."<<endl;
//	cout<<"...a circle witha diameter of phi has anarea of "
//		<<pi*phi*phi/4
//		<<endl;
//	cout<<"...phi squared is "<<phi*phi<<endl;
//	cout<<"...in fact,phi+1 is also "
//		<<phi+1<<endl;
//	cout<<"Value of count is "
//		<<count<<endl;
//	count += 3;
//	cout<<"Today is "<<days[count]<<endl;	

//	std::cout<<std::endl
//			<<"Pi has the value "
//			<<data::pi<<std::endl;
//	std::cout<<"The second day of the week is " 
//			<<data::days[1]<<std::endl;	

//	std::cout<<std::endl
//			<<"Pi has the value "
//			<<datah::pi<<std::endl;
//	std::cout<<"The second day of the week is " 
//			<<datah::days[1]<<std::endl;
//
//	double data1[] = {1.5,1.6,3.1,1.1,3.8,2.1};
//	const int dataSize1 = sizeof data1 / sizeof data1[0];
//	cout<<endl
//		<<"Minmum double is "
//		<<min(data1,dataSize1)
//		<<endl;
//	cout<<endl
//		<<"Maxmum double is "
//		<<max(data1,dataSize1)
//		<<endl;
//
//	cout<<"*************"<<endl;
//
//	double data[] = {1.5,4.6,3.1,1.1,3.8,2.1};
//	int numbers[] = {23,2,14,56,42,12,1,45};
//	cout<<endl;
//	const int dataSize = sizeof data/sizeof data[0];
//	cout<<"Minimum double is "
//		<<min(data,dataSize)<<endl;
//	cout<<"Maximum double is "
//		<<max(data,dataSize)<<endl;
//		
//	const int numbersSize = sizeof numbers/sizeof numbers[0];
//	cout<<"Minimum integer is "
//		<<min(numbers,numbersSize)
//		<<endl;
//	cout<<"Maximum integer is "
//		<<max(numbers,numbersSize)
//		<<endl;


	double data[] = {1.5,4.6,3.1,1.1,3.8,2.1};
	int numbers[] = {23,2,14,56,42,12,1,45};
	
	cout<<endl;
	const int dataSize = sizeof data/sizeof data[0];
	cout<<"Minmum double is "
		<<min(data,dataSize)<<endl;
	cout<<"Maximum double is " 
		<<max(data,dataSize)<<endl;
		
	const int numbersSize = sizeof numbers/sizeof numbers[0];
	cout<<"Minimum intgeger is "
		<<min(data,numbersSize)<<endl;
	cout<<"Maximum integer is "
		<<max(data,numbersSize)<<endl;
	
	double newData[numbersSize];
	normalize(numbers,newData,numbersSize);
	// 输出序列化之后的数组
	for(int i = 0;i<numbersSize;i++){
		if(i%5 == 0){
			cout<<endl;
		}
		cout<<setw(12)<<newData[i];
	} 
	return 0;
}
