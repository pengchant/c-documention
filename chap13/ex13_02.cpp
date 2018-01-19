#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Box.h"
#include "List.h"

using namespace std;

// 内联函数
inline int random(int count) {
	return 1+static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1.0));
}
// 寻找最大的box 
Box* maxBox(TruckLoad& load){
	Box* pBox = load.getFirstBox();
	Box* pNextBox;
	while(pNextBox = load.getNextBox()){
		if(pBox->compareVolume(*pNextBox)<0){
			pBox = pNextBox;
		}
	}
	return pBox;
}

int main() {
	const int dimLimit = 100;
	srand((unsigned)time(0));
	// 定义卡车对象 
	TruckLoad load1;
	// 添加box 
	for(int i = 0;i<3;i++){
		load1.addBox(*(new Box(random(dimLimit),random(dimLimit),random(dimLimit))));
	}
	// 寻找最大的box 
	Box* pBox = maxBox(load1);
	// 输出最大box的信息 
	cout<<endl
		<<"The largest box in the first list is "
		<<pBox->getLength()<<" by "
		<<pBox->getWidth()<<" by "
		<<pBox->getHeight()<<endl;
	// ******利用副本构造函数构造load2对象 ****** 
	TruckLoad load2(load1); 
	// 同样找出最大的box 
	pBox = maxBox(load2);
	// 输出load2中最大box的相关信息 
	cout<<endl
		<<"The largest box in the second list is "
		<<pBox->getLength()<<" by "
		<<pBox->getWidth()<<" by "
		<<pBox->getHeight()<<endl;
	// 继续在load2中添加5个box 
	for(int i = 0;i<5;i++){
		load2.addBox(*(new Box(random(dimLimit),random(dimLimit),random(dimLimit))));
	}
	// 寻找新增加load2中的最大的box 
	pBox = maxBox(load2);
	// 输出最新load2中最大box的相关的信息 
	cout<<endl
		<<"The largest box in the extended second list is " 
		<<pBox->getLength()<<" by " 
		<<pBox->getWidth()<<" by "
		<<pBox->getHeight()<<" by "
		<<endl;
	// 找到load1中的头元素的box对象 
	Box* pNextBox = load1.getFirstBox();
	// 下面是累计load1中现在为止到底有多少个box对象(原来是3个，后来其副本load2中又新增了5个对象) 
	int count  = 0;
	while(pNextBox){
		count++;
		pNextBox = load1.getNextBox();
	}
	cout<<endl
		<<"First list still contains "
		<<count
		<<" Box objects."
		<<endl;
	// 删除load2的自由内存区的空间 
	pNextBox = load2.getFirstBox(); 
	while(pNextBox){
		delete pNextBox;
		pNextBox = load2.getNextBox();
	} 
	
	Box* tBox = new Box(12.0,12.0,12.0);
	Box ttBox(12.0,12.0,12.0);
	cout<<"----"<<tBox<<endl;
	cout<<"----"<<&ttBox<<endl;
	return 0;
}

