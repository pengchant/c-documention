#ifndef ABOX_H
#define ABOX_H
class ABox{
	public:
		ABox();
		ABox(double lengthValue,double widthValue,double heightValue);
		
		double volume()	const;
		
		int compareVolume(const ABox& otherBox)const;
	private:
		double length;
		double width;
		double height;
};
#endif 
