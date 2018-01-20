#include <cstring>
#include "ErrorMessage.h"

using std::cout;
using std::endl;

// 构造函数 
ErrorMessage::ErrorMessage(const char* pText){
	pMessage = new char[strlen(pText)+1];
	strcpy(pMessage,pText);
}
// 析构函数 
ErrorMessage::~ErrorMessage(){
	cout<<endl
		<<"Destructor called."
		<<endl;
	delete[] pMessage;
} 
// 重置message对象 
void ErrorMessage::resetMessage(){
	for(char* temp = pMessage;*temp!='\0';*(temp++) = '*');
}
// 赋值运算符重载 
ErrorMessage& ErrorMessage::operator=(const ErrorMessage& message){
	// 首先比较两个对象的地址是否相等 
	if(this == &message){ 
		return *this;
	}
	// 删除pMessage 
	delete[] pMessage;
	pMessage = new char[strlen(message.pMessage+1)];
	strcpy(this->pMessage,message.pMessage);
}
