#include "tempcomp.h"

namespace tcompare{
	template<class Toriginal,class Tnormalized>
		void normalize(Toriginal* data,Tnormalized* newData,int size){
		Toriginal minValue = min(data,size);
		for(int i = 0;i<size;i++){
			newData[i] = static_cast<Tnormalized>(data[i] - minValue);
		} 
		Tormalized maxValue = max(data,size);
		for(int i = 0;i<size;i++){
			newData[i] /= maxValue;
		}
	}
}
