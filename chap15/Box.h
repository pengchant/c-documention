#ifndef BOX_H
#define BOX_H
class Box{
	public:
		Box(); 
		~Box(); 
		// Box�ĸ������캯��
		Box(const Box& aBox);
		Box(double lv,double wv,double hv);
		double volume() const;
	protected:
		double length;
		double width;
		double height;
};
#endif 
