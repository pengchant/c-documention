#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath> 
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::sqrt; 
using std::setprecision;
using std::fixed;
using std::scientific;
using std::wcin;
using std::wcout;
using std::rand;
using std::time;


/*ʹ�ø�����*/
void testfloat(){
	const double fish_factor = 2.0/0.5;
	const double inches_per_foot = 12.0;
	const double pi = 3.1415926;
	
	double fish_count = 0.0;
	double fish_length = 0.0;
	
	cout<<"��������Ҫ�������������";
	cin>>fish_count;
	cout<<"�������ƽ������(Ӣ��):";
	cin>>fish_length;
	fish_length = fish_length/inches_per_foot;
	
	double pond_area = fish_count*fish_length*fish_factor;
	
	double pond_diemeter = 2.0*sqrt(pond_area/pi);
	
	cout<<" \n Pond diameter required for "
		<<fish_count<<" fish is "
		<<pond_diemeter<<" feet.\n";
} 

/*�����������еĴ���*/
void testFloatError(){
	float value1 = 0.1f;
	float value2 = 2.1f;
	value1 -= 0.09f;
	value2 -= 2.09f;
	cout<<value1-value2<<endl;	
}

/*����������ݳ���*/
void testExprOut(){
	float value1 = 0.1f;
	float value2 = 2.1f;
	value1 -= 0.09f;
	value2 -= 2.09f;
	cout<<setprecision(14)<<fixed;
	cout<<value1-value2<<endl;
	
	cout<<setprecision(5)<<scientific;
	cout<<value1-value2<<endl;
}

/*��ֵ����ʹ��*/
void testNumFunc(){
	float y = 3.6f;
	cout<<"���ֺ���ʹ�õĽ�����£�"<<endl;
	cout<<setw(20)<<"abs(3.6f):"<<setw(20)<<abs(y)<<endl;
	cout<<setw(20)<<"fabs(3.6f):"<<setw(20)<<fabs(y)<<endl;
	cout<<setw(20)<<"ceil(3.6f):"<<setw(20)<<ceil(y)<<endl;
	cout<<setw(20)<<"floor(3.6f):"<<setw(20)<<floor(y)<<endl;
	cout<<setw(20)<<"exp(3.6f):"<<setw(20)<<exp(y)<<endl;
	cout<<setw(20)<<"log(3.6f):"<<setw(20)<<log(y)<<endl;
	cout<<setw(20)<<"log 10(3.6f):"<<setw(20)<<log10(y)<<endl;
	cout<<setw(20)<<"Pow(3.6f,2):"<<setw(20)<<pow(y,2)<<endl;
}

/*���Ǻ�����ʹ��*/
void triFunc(){
	double angle = 1.5;
	double sin_value = std::sin(angle);
	cout<<sin_value<<endl;
	
	float angle_deg = 60.0f;
	const float pi = 3.1415926f;
	const float pi_degrees = 180.0f;
	float tangent = std::tan(pi*angle_deg/pi_degrees);
	cout<<tangent<<endl;
	
	double height = 100.0;
	double distance = 50.0;
	angle = std::atan2(height,distance);
	
	double toe_to_tip = distance*std::cos(angle);
	cout<<"���ĸ߶�Ϊ��"<<toe_to_tip<<endl;
}

/*�ַ���ʹ��*/
void testchar(){
//	char c1 = '\x41';
//	char c2 = '\81';
//	cout<<c1<<c2<<endl;
//	char letter = 65;
//	letter += 2;
//	cout<<letter<<endl;
//	
//	char ch = 0;
//	int ch_value = 0;
//	cout<<" Enter a character:";
//	cin>>ch;
//	ch_value = ch;
//	cout<<endl
//		<<ch<<" is "<<ch_value;
//	ch_value = ++ch;
//	cout<<endl
//		<<ch<<" is "<<ch_value
//		<<endl;	
		
	// ���ַ���ʹ��
	wchar_t wide_letter = 0;
	wcin>>wide_letter;
	wcout<<wide_letter<<endl;
} 

/*��ʽǿ������ת��*/
void castTest(){
//	const long feet_per_yard = 3;
//	const long inches_per_foot = 12;
//	
//	double yards = 0.0;
//	long yds = 0;
//	long ft = 0;
//	long ins = 0;
//	
//	cout<<" Enter a length in yards as a decimal: ";
//	cin>>yards;
//	
//	yds = static_cast<long>(yards);
//	ft = static_cast<long>((yards-yds)*feet_per_yard);
//	ins = static_cast<long>(yards*feet_per_yard*inches_per_foot)%inches_per_foot;
//	
//	cout<<endl
//		<<yards<<" yards converts to "
//		<<yds<<" yards "
//		<<ft<<" feet "
//		<<ins<<" inches.";
//	cout<<endl;

	const int limit = 11;  
	int random_value = static_cast<int>(  
							(limit*static_cast<long>(rand()))/(RAND_MAX+1L)
					   ); 
	cout<<random_value<<endl;
}



int main(int argc, char** argv) {
//	testFloatError();
//	testExprOut();
//	testNumFunc();
//	triFunc();
//	testchar();
	castTest();
	return 0;
}
