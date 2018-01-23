#include <iostream>
#include "Box.h"
#include "TouchPack.h"

using std::cout;
using std::endl;

int main1(){
	Box myBox(20.0,30.0,40.0);
	TouchPack hardcase(20.0,30.0,40.0);
	
	cout<<endl;
	myBox.showVolume();
	hardcase.showVolume();
	
	cout<<"hardcase volume is "<<hardcase.volume(1)<<endl;
	
	Box* pBox = &hardcase;
	cout<<"hardacse volume through pBox is "<<pBox->volume()<<endl;
	return 0;
}
