#ifndef TOUCHPACK_H
#define TOUCHPACK_H

#include "Box.h"

class TouchPack:public Box{
	public:
		TouchPack(double lengthValue,double widthValue,double heightValue); 
		virtual double volume(const int i = 500) const;
};
#endif
