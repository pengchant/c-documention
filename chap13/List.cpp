#include <iostream>
#include "Box.h"
#include "List.h"

using std::cout;
using std::endl;


TruckLoad::~TruckLoad(){
	cout<<"Truckload destructor called."<<endl;
	// ����ʵ��ɾ��TruckLoad�����е�һϵ��Package���󣬱����ڴ�й© 
	while(pCurrent=pHead->pNext) {
		delete pHead;
		pHead = pCurrent;
	}
	delete pHead;
}

TruckLoad::Package::~Package(){
	cout<<"Package destructor called."<<endl;
} 

// package�������б�Ĺ��캯�� 
TruckLoad::Package::Package(Box& rNewBox):pBox(rNewBox),pNext(0){};
// ������һ��package 
void TruckLoad::Package::setNext(Package* pPackage){
	pNext = pPackage; 
} 
// TruckLoad�ಿ��
TruckLoad::TruckLoad(Box* pBox,int count){
	pHead = pTail = pCurrent = 0;	
	if((count>0)&&(pBox!=0)){
		// ���Ԫ�ص�truck�� 
		for(int i = 0;i<count;i++){
//			addBox(pBox+i);
		// �Ӵ��Զ��������
			addBox(*(pBox+i));
		}
	}
} 
// �������캯��
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

// ��ȡ��һ��box 
Box* TruckLoad::getFirstBox(){
	pCurrent = pHead;
	return &pCurrent->pBox;
}
// ��ȡ��һ��box 
Box* TruckLoad::getNextBox(){
	if(pCurrent){
		pCurrent = pCurrent->pNext;		
	}else{
		pCurrent = pHead;
	}
	return pCurrent?&pCurrent->pBox:0;
}
// ���һ��box 
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
