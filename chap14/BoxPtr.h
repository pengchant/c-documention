// ΪBox���󴴽�����ָ����
// ����������ʵ�Ƿ���TruckLoad�Ķ���Ĳ���
// ���磺�����˽⹹�������*load ʵ���Ϸ����˵�ǰBox����
// 		 ��ӳ�Ա�����������load-> ʵ���ϵ�ǰ��boxָ��
//		 �ۼ��������a. ++load �൱��loadָ����һ��package�е�box���󲢷��� 
// 					 b. load++ �൱��load���ص�ǰbox��ָ�룬��load����ָ����һ��package�е�box���� 
// �ܽ᣺ͨ��������ָ���࣬���Ժܷ���������е�box ֱ�ӽ������������������һ����ݷ��㣡 
#ifndef BOXPTR_H
#define BOXPTR_H
#include "List.h" 
class BoxPtr{
	public:
		BoxPtr(TruckLoad& load);
		// * overload
		Box& operator*() const;
		// -> overload 
		Box* operator->() const;
		// ++ overload
		Box* operator++();
		// overload++
		const Box* operator++(int);
		// ת��Ϊbool���� 
		operator bool();
	private:
		Box* pBox;
		TruckLoad& rLoad;
		BoxPtr();
		BoxPtr(BoxPtr&);
		BoxPtr& operator=(const BoxPtr&);
};
#endif 
