#include <cstring>
#include "ErrorMessage.h"

using std::cout;
using std::endl;

// ���캯�� 
ErrorMessage::ErrorMessage(const char* pText){
	pMessage = new char[strlen(pText)+1];
	strcpy(pMessage,pText);
}
// �������� 
ErrorMessage::~ErrorMessage(){
	cout<<endl
		<<"Destructor called."
		<<endl;
	delete[] pMessage;
} 
// ����message���� 
void ErrorMessage::resetMessage(){
	for(char* temp = pMessage;*temp!='\0';*(temp++) = '*');
}
// ��ֵ��������� 
ErrorMessage& ErrorMessage::operator=(const ErrorMessage& message){
	// ���ȱȽ���������ĵ�ַ�Ƿ���� 
	if(this == &message){ 
		return *this;
	}
	// ɾ��pMessage 
	delete[] pMessage;
	pMessage = new char[strlen(message.pMessage+1)];
	strcpy(this->pMessage,message.pMessage);
}
