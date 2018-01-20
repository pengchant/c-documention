// 为Box对象创建智能指针类
// 该智能类其实是方便TruckLoad的对象的操作
// 例如：重载了解构运算符：*load 实际上返回了当前Box对象
// 		 间接成员访问运算符：load-> 实际上当前的box指针
//		 累加运算符：a. ++load 相当于load指向下一个package中的box对象并返回 
// 					 b. load++ 相当于load返回当前box的指针，而load继续指向下一个package中的box对象 
// 总结：通过该智能指针类，可以很方便对链表中的box 直接进行像基本的数据运算一样快捷方便！ 
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
		// 转化为bool类型 
		operator bool();
	private:
		Box* pBox;
		TruckLoad& rLoad;
		BoxPtr();
		BoxPtr(BoxPtr&);
		BoxPtr& operator=(const BoxPtr&);
};
#endif 
