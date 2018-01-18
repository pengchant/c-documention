#include "SizeBox.h" 

SizeBox::SizeBox():length(1.0),width(1.0),height(1.0),pMaterial("CardBoard"){
}

int SizeBox::totalSize(){
	return sizeof(length)+sizeof(width)+sizeof(height)+sizeof(pMaterial);
} 
