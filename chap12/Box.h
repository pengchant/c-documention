#ifndef BOX_H
#define BOX_H
class Box{
	public:
		double length;
		double height;
		double width;
		//默认的构造函数
		Box();
		//构造函数
		Box(double lengthValue,double widthValue,double heightValue);
		
		double volume();
}; 
#endif
