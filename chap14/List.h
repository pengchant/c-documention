#ifndef LIST_H
#define LIST_H

#include "Box.h"

class TruckLoad{
	public:
		TruckLoad(Box* pBox = 0,int count = 1);
	    TruckLoad(const TruckLoad& load);
		~TruckLoad();
		Box* getFirstBox();
		Box* getNextBox();
		void addBox(Box* pBox);
		Box operator[](int index) const;
	private:
		class Package{
			public:
				Box* pBox;
				Package* pNext;
				Package(Box* pNewBox); 
		};
		Package* pHead;
		Package* pTail;
		Package* pCurrent;
};
#endif 
