#define TESTFUNCTION

#ifdef TESTFUNCTION
#include <iostream> 
using namespace std;
#endif

#include "functions.h"

int fun::sum(int x,int y){
	#ifdef TESTFUNCTION
	std::cout<<"Function sum called."<<std::endl;
	#endif
	return x+y;
}

int fun::product(int x,int y){
	#ifdef TESTFUNCTION
	std::cout<<"Function product called."<<std::endl;
	#endif
	return x*y;
}

int fun::difference(int x,int y){
	#ifdef TESTFUNCTION
	std::cout<<"Function difference called."<<std::endl;
	#endif
	return x-y;
}
