#ifndef PBOX_H
#define PBOX_H

class PBox{
	public:
//		PBox();
		PBox(double lengthValue=1.0,double widthValue=1.0,double heightValue = 1.0);
		double volume();
		
		double getLength()const{
			return length;
		}
		double getWidth()const{
			return width;
		}
		double getHeight()const{
			return height;
		} 
		// 声明set函数
		PBox* setLength(double lvalue);
		PBox* setWidth(double wvalue);
		PBox* setHeight(double hvalue);
		
		// 声明一个友元函数
		friend double boxSurface(const PBox& theBox);
		
		// 声明两个比较box对象
		int compareVolume(PBox& otherBox);
		 
	private:
		double length;
		double width;
		double height;
};
#endif 
