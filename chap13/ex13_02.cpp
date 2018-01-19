#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Box.h"
#include "List.h"

using namespace std;

// ��������
inline int random(int count) {
	return 1+static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1.0));
}
// Ѱ������box 
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
	// ���忨������ 
	TruckLoad load1;
	// ���box 
	for(int i = 0;i<3;i++){
		load1.addBox(*(new Box(random(dimLimit),random(dimLimit),random(dimLimit))));
	}
	// Ѱ������box 
	Box* pBox = maxBox(load1);
	// ������box����Ϣ 
	cout<<endl
		<<"The largest box in the first list is "
		<<pBox->getLength()<<" by "
		<<pBox->getWidth()<<" by "
		<<pBox->getHeight()<<endl;
	// ******���ø������캯������load2���� ****** 
	TruckLoad load2(load1); 
	// ͬ���ҳ�����box 
	pBox = maxBox(load2);
	// ���load2�����box�������Ϣ 
	cout<<endl
		<<"The largest box in the second list is "
		<<pBox->getLength()<<" by "
		<<pBox->getWidth()<<" by "
		<<pBox->getHeight()<<endl;
	// ������load2�����5��box 
	for(int i = 0;i<5;i++){
		load2.addBox(*(new Box(random(dimLimit),random(dimLimit),random(dimLimit))));
	}
	// Ѱ��������load2�е�����box 
	pBox = maxBox(load2);
	// �������load2�����box����ص���Ϣ 
	cout<<endl
		<<"The largest box in the extended second list is " 
		<<pBox->getLength()<<" by " 
		<<pBox->getWidth()<<" by "
		<<pBox->getHeight()<<" by "
		<<endl;
	// �ҵ�load1�е�ͷԪ�ص�box���� 
	Box* pNextBox = load1.getFirstBox();
	// �������ۼ�load1������Ϊֹ�����ж��ٸ�box����(ԭ����3���������丱��load2����������5������) 
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
	// ɾ��load2�������ڴ����Ŀռ� 
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

