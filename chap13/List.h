#ifndef LIST_H
#define LIST_H
#include "Box.h" 

class TruckLoad{
	public:
		~TruckLoad();
		TruckLoad(Box* pBox = 0,int count = 1);
		TruckLoad(const TruckLoad& load);
		Box* getFirstBox();
		Box* getNextBox();
//		void addBox(Box* pBox); 
		void addBox(Box& rBox);
	private:
		// 定义一个嵌套类
		class Package{
			public:
				~Package();
//				Box* pBox;
				Box& pBox;
				Package* pNext;  
				void setNext(Package* pPackage); 
//				Package(Box* rNewBox);
				Package(Box& rNewBox);
		}; 
		Package* pHead;
		Package* pTail;
		Package* pCurrent;
};
#endif
