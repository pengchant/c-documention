#include <iostream>
#include "Box.h"
#include "List.h"

using std::cout;
using std::endl;

TruckLoad::Package::Package(Box* pNewBox):pBox(pNewBox),pNext(0){}

TruckLoad::TruckLoad(Box* pBox,int count){
	pHead = pTail = pCurrent = 0;
	if(count>0&&pBox!=0){
		for(int i = 0;i<count;i++){
			addBox(pBox+i);
		}
	}	
}

// 副本构造函数 
TruckLoad::TruckLoad(const TruckLoad& load){
	pHead = pTail = pCurrent = 0;
	if(load.pHead == 0){
		return;
	}
	Package* pTemp = load.pHead;
	do{
		addBox(pTemp->pBox);
	}while(pTemp = pTemp->pNext);
}

// 析构函数
TruckLoad::~TruckLoad(){
	while(pCurrent = pHead->pNext){
		delete pHead;
		pHead = pCurrent;
	}
	delete pHead;
}

Box* TruckLoad::getFirstBox(){
	pCurrent = pHead;
	return pCurrent->pBox;
}

Box* TruckLoad::getNextBox(){
	if(pCurrent){
		pCurrent = pCurrent->pNext;
	}else{
		pCurrent = pHead;
	}
	return pCurrent?pCurrent->pBox:0;
}

void TruckLoad::addBox(Box* pBox){
	Package* pPackage = new Package(pBox);
	if(pHead){
		pTail->pNext = pPackage;
	}else{
		pHead = pPackage;
	}
	pTail = pPackage;
}

// 定义下标运算符重载函数
Box TruckLoad::operator[](int index) const{
	if(index<0){
		cout<<endl
			<<"Negative index.";
		exit(1);
	}
	Package* pPackage = pHead;
	int count = 0;
	do{
		if(index == count++){
			return *pPackage->pBox;
		}
	}while(pPackage = pPackage->pNext);
	cout<<endl
		<<"Out of rang index";
	exit(1);
}
