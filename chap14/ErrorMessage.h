#ifndef ERRORMESSAGE_H
#define ERRORMESSAGE_H
#include <iostream>

using namespace std;

class ErrorMessage{
	public:
		ErrorMessage(const char* pText = "Error");
		~ErrorMessage();
		void resetMessage();
		ErrorMessage& operator=(const ErrorMessage& Message);
		char* what() const{
			return pMessage;
		}
	private:
		char* pMessage;
};
#endif 
