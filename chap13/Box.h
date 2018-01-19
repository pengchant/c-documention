#ifndef BOX_H
#define BOX_H
class Box{
	public:
		~Box();
		Box(double aLength = 1.0,double aWidth = 1.0,double aHeight = 1.0);
		double volume() const;
	    double getLength() const;
		double getWidth() const;
		double getHeight() const;
		int compareVolume(const Box& otherBox) const;
	private:
	    double length;
		double width;
		double height;
};
#endif
 
