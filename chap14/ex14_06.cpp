// ʹ������ָ��
#include <iostream> 
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

#include "Box.h"
#include "List.h"
#include "BoxPtr.h"

// ��������
inline int random(int count) {
	return 1+ static_cast<int>(count*static_cast<double>(rand())/(RAND_MAX+1.0));
}

int main(){
	const int dimLimit = 100;
	srand((unsigned)time(0));
	const int boxCount = 20;
	// ����һ��box������󲢸�ֵ 
	Box boxes[boxCount];
	for(int i = 0;i<boxCount;i++){
		boxes[i] = Box(random(dimLimit),random(dimLimit),random(dimLimit));
	}
	// ����truckLoad���� 
	TruckLoad load = TruckLoad(boxes,boxCount);
	// ��������ָ�� 
	BoxPtr pLoadBox(load);
	// �������ؽ������������ȡbox���� 
	Box maxBox = *pLoadBox;
	// �����һ��box��volume 
	if(pLoadBox){
		cout<<endl
			<<"Volume of first Box is "
			<<pLoadBox->volume();
	}
	// Ѱ������box ��������ǰ���ۼ������ �ƶ�ָ�� 
	while(++pLoadBox){
		if(maxBox<*pLoadBox){// �Ƚ������< �ͽ���������� 
			maxBox = *pLoadBox;
		}
	}
	// ���max box�������Ϣ 
	cout<<endl
		<<"The largest box in the list is "
		<<maxBox.getLength()<<" by "
		<<maxBox.getWidth()<<" by "
		<<maxBox.getHeight()<<" by "
		<<maxBox.volume()<<endl;
	return 0;
}
