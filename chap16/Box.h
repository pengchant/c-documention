#ifndef BOX_H
#define BOX_H
class Box{
	public:
		Box(double lengthValue=1.0,double widthValue=1.0,double heightValue=1.0);
	    void showVolume() const;
	    // 注意使用对象调用虚函数总是进行静态解析，只有通过指针或者引用调用虚函数才会进行动态解析 
		virtual double volume(const int i=5) const;
		// 另外不能再函数的定义中添加关键字这会引起一个错误 
	protected:
		double length;
		double width;
		double height;
};
#endif
