#include <iostream>
#include "Box.h"
#include "List.h"

using std::cout;
using std::endl;


TruckLoad::~TruckLoad(){
	cout<<"Truckload destructor called."<<endl;
	// 下面实现删除TruckLoad对象中的一系列Package对象，避免内存泄漏 
	while(pCurrent=pHead->pNext) {
		delete pHead;
		pHead = pCurrent;
	}
	delete pHead;
}

TruckLoad::Package::~Package(){
	cout<<"Package destructor called."<<endl;
} 

// package带参数列表的构造函数 
TruckLoad::Package::Package(Box& rNewBox):pBox(rNewBox),pNext(0){};
// 设置下一个package 
void TruckLoad::Package::setNext(Package* pPackage){
	pNext = pPackage; 
} 
// TruckLoad类部分
TruckLoad::TruckLoad(Box* pBox,int count){
	pHead = pTail = pCurrent = 0;	
	if((count>0)&&(pBox!=0)){
		// 添加元素到truck中 
		for(int i = 0;i<count;i++){
//			addBox(pBox+i);
		// 接触对对象的引用
			addBox(*(pBox+i));
		}
	}
} 
// 副本构造函数
TruckLoad::TruckLoad(const TruckLoad& load) {
	pHead = pTail = pCurrent = 0;
	if(load.pHead == 0){
		return;
	}
	Package* pTemp = load.pHead;
	do{
		addBox(pTemp->pBox);
	}while(pTemp = pTemp->pNext);
}

// 获取第一个box 
Box* TruckLoad::getFirstBox(){
	pCurrent = pHead;
	return &pCurrent->pBox;
}
// 获取下一个box 
Box* TruckLoad::getNextBox(){
	if(pCurrent){
		pCurrent = pCurrent->pNext;		
	}else{
		pCurrent = pHead;
	}
	return pCurrent?&pCurrent->pBox:0;
}
// 添加一个box 
//void TruckLoad::addBox(Box* pBox){
//	Package* pPackage = new Package(pBox);
//	if(pHead){
//		pTail->setNext(pPackage);
//	}else{
//		pHead = pPackage;
//	}
//	pTail = pPackage;
//}

void TruckLoad::addBox(Box& rBox){
	Package* pPackage = new Package(rBox);
	if(pHead){
		pTail->setNext(pPackage);
	}else{
		pHead = pPackage;
	}
	pTail = pPackage;
} 
