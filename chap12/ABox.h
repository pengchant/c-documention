#ifndef ABOX_H
#define ABOX_H
class ABox{
	public:
		ABox();
		ABox(double lengthValue,double widthValue,double heightValue);
		
		double volume()	const;
		
		int compareVolume(const ABox& otherBox)const;
		
		static int getObjectCount(){
			return objectCount;
		}
		static double sum(ABox thBox){
			return thBox.height+thBox.length+thBox.width;
		};
	private:
		static int objectCount;// 用来记录实例化的次数 
		double length;
		double width;
		double height;
};
#endif 
