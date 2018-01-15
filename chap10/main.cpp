#include <iostream>
#include <iomanip>
#include <string>

/*程序文件和预处理指令*/
using namespace std;

// 声明外部变量
extern float phi;
extern const double pi;
extern const string days[];
extern int count;
 
int main(int argc, char** argv) {
	cout<<setprecision(3)<<fixed;
	cout<<endl
		<<"To 3 decimal places..."<<endl;
	cout<<"...a circle witha diameter of phi has anarea of "
		<<pi*phi*phi/4
		<<endl;
	cout<<"...phi squared is "<<phi*phi<<endl;
	cout<<"...in fact,phi+1 is also "
		<<phi+1<<endl;
	cout<<"Value of count is "
		<<count<<endl;
	count += 3;
	cout<<"Today is "<<days[count]<<endl;	
	return 0;
}
