#ifndef BOX_H
#define BOX_H
class Box{
	public:
		Box(double lengthValue=1.0,double widthValue=1.0,double heightValue=1.0);
	    void showVolume() const;
	    // ע��ʹ�ö�������麯�����ǽ��о�̬������ֻ��ͨ��ָ��������õ����麯���Ż���ж�̬���� 
		virtual double volume(const int i=5) const;
		// ���ⲻ���ٺ����Ķ�������ӹؼ����������һ������ 
	protected:
		double length;
		double width;
		double height;
};
#endif
