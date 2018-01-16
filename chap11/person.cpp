#include <iostream>
#include "person.h"

// 定义函数
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
	// 如果当年某人的生日过了，则表示为（当前年份-出生年份），否则（当前年份-出生年份）-1 
	if((date.month>birthdate.month)||(date.month == birthdate.month)&&date.day>=birthdate.day){
		return years; 
	}else{
		return --years;
	}
}
