#include <iostream>
#include "person.h"

using namespace std;

int main(){
	Person star = {
		{// ���� 
			"Chen",
			"Peng"
		},
		{// (�죬�£���) 
			1,3,1995
		},
		{// ���ţ����� 
			6666,8978978
		}
	};
	Person actress;
	actress = star;
	star.show();
	Date today = {16,1,2018};
	
	cout<<endl<<"Today is ";
	today.show();
	cout<<endl;
	
	cout<<"Today "<<actress.name.firstname<<" is "
		<<actress.age(today)
		<<" years old."
		<<endl;
}
