#ifndef BOX_H
#define BOX_H
class Box{
	public:
		double length;
		double height;
		double width;
		//Ĭ�ϵĹ��캯��
		Box();
		//���캯��
		Box(double lengthValue,double widthValue,double heightValue);
		
		double volume();
}; 
#endif
