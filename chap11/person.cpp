#include <iostream>
#include "person.h"

// ���庯��
void Name::show(){
	std::cout<<firstname<<" "<<surname<<std::endl;
} 
void Date::show(){
	std::cout<<month<<"/"<<day<<"/"<<year<<std::endl;
}
void Phone::show(){
	std::cout<<areacode<<" "<<number<<std::endl;
}
void Person::show(){
	std::cout<<std::endl;
	name.show();
	std::cout<<"Born: ";
	birthdate.show();
	std::cout<<"Telephone: ";
	number.show();
}
int Person::age(Date& date){
	if(date.year<=birthdate.year){
		return 0;
	}
	int years = date.year - birthdate.year;
	// �������ĳ�˵����չ��ˣ����ʾΪ����ǰ���-������ݣ������򣨵�ǰ���-������ݣ�-1 
	if((date.month>birthdate.month)||(date.month == birthdate.month)&&date.day>=birthdate.day){
		return years; 
	}else{
		return --years;
	}
}
