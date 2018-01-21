#include <iostream>
#include "Box.h"
#include "Carton.h"

using std::cout;
using std::endl;

int main(){
	Box myBox(40.0,30.0,20.0);
	Carton myCarton;
	Carton candyCarton("Thin cardboard");
	
	cout<<endl
		<<"myBox occupies "
		<<sizeof myBox
		<<" volume: "
		<<myBox.volume() 
		<<endl;
	cout<<"myCarton occupies "
		<<sizeof myCarton
		<<" volume: " 
		<<myCarton.volume()
		<<endl;
	cout<<"candyCarton occupies "
		<<sizeof candyCarton
		<<" volume: "
		<<candyCarton.volume()
		<<endl;
	
	return 0;
}
