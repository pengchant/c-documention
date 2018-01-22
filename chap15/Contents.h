#ifndef CONTENTS_H
#define CONTENTS_H
class Contents{
	public:
		Contents(const char* pStr = "cereal",double weight = 0.3,double vol = 0);
		~Contents();
		double getWeight() const;
	protected:
		char* pName;
		double volume;
		double unitweight;
};
#endif 
