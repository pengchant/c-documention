#include <iostream>
#include "ABox.h"

using namespace std;

int main(){
	cout<<endl;
	ABox firstBox(17.0,11.0,5.0);
	cout<<"Object count is "
		<<firstBox.getObjectCount()
		<<endl;
	ABox boxes[5];
	cout<<"Object count is "
		<<firstBox.getObjectCount()
		<<endl;
	const int count = sizeof boxes/sizeof boxes[0];
	cout<<"The boxes array has " 
		<<count<<"elements."
		<<endl;
	cout<<"Each element occupies "
		<<sizeof boxes[0]<<" bytes."
		<<endl;
	for(int i = 0;i<count;i++){
		cout<<"Volume of boxes["<<i<<"]="
			<<boxes[i].volume()
			<<endl;
	}
	
	cout<<"µ÷ÓÃ¾²Ì¬º¯Êý:sum()=>"
		<<firstBox.sum(firstBox)
		<<endl; 
	return 0;
}
