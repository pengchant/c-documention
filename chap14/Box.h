#ifndef BOX_H
#define BOX_H 
class Box{
	public:
		Box(double aLength = 1.0,double aWidth = 1.0,double aHeight = 1.0);
		double volume() const;
		double getLength() const;
		double getWidth() const;
		double getHeight() const;				
		// ���ز����� 
		bool operator<(const Box& aBox) const;
		bool operator<(const double aValue) const;
//		bool operator<(const Box& aBox) const{
//			return volume()<aBox.volume();
//		}		 
		static void show(const Box& aBox);
		Box operator+(const Box& box) const;
	private:
		double length;
		double width;
		double height;
};

// �����������
inline bool Box::operator<(const Box& aBox) const{
	return volume()<aBox.volume();
} 
inline bool Box::operator<(const double aValue) const{
	return volume()<aValue;
}
inline Box Box::operator+(const Box& aBox) const{
	return Box(length>aBox.length?length:aBox.length,width>aBox.width?width:aBox.width,aBox.height+height);
}
// ȫ�����������
inline bool operator<(const double aValue,const Box& aBox){
	return aValue<aBox.volume();
} 
#endif
