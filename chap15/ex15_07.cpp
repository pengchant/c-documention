#include <iostream>
#include "CerealPack.h"

using std::endl;
using std::cout;

int main(){
	CerealPack packofFlakes(8.0,3.0,10.0,"Cornflakes");
	cout<<endl;
	cout<<"packOfFlakes volume is " <<packofFlakes.Carton::volume()<<endl;
	cout<<"packOfFlakes weight is " <<packofFlakes.Contents::getWeight()
		<<endl;
	return 0; 
}
