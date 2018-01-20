// 使用智能指针
#include <iostream> 
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

#include "Box.h"
#include "List.h"
#include "BoxPtr.h"

// 内联函数
inline int random(int count) {
	return 1+ static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1.0));
}

int main(){
	const int dimLimit = 100;
	srand((unsigned)time(0));
	const int boxCount = 20;
	// 定义一个box数组对象并赋值 
	Box boxes[boxCount];
	for(int i = 0;i<boxCount;i++){
		boxes[i] = Box(random(dimLimit),random(dimLimit),random(dimLimit));
	}
	// 创建truckLoad对象 
	TruckLoad load = TruckLoad(boxes,boxCount);
	// 创建智能指针 
	BoxPtr pLoadBox(load);
	// 利用重载解引用运算符获取box对象 
	Box maxBox = *pLoadBox;
	// 输出第一个box的volume 
	if(pLoadBox){
		cout<<endl
			<<"Volume of first Box is "
			<<pLoadBox->volume();
	}
	// 寻找最大的box 利用重载前置累加运算符 移动指针 
	while(++pLoadBox){
		if(maxBox<*pLoadBox){// 比较运算符< 和解引用运算符 
			maxBox = *pLoadBox;
		}
	}
	// 输出max box的相关信息 
	cout<<endl
		<<"The largest box in the list is "
		<<maxBox.getLength()<<" by "
		<<maxBox.getWidth()<<" by "
		<<maxBox.getHeight()<<" by "
		<<maxBox.volume()<<endl;
	return 0;
}
