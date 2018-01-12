#include <iostream>
#include <cctype>

using namespace std;

/*�Ƚ�����ֵ*/
void testCompare(){
	char first = 0;
	char second = 0;
	
	cout<<"Enter a character:";
	cin>>first;
	
	cout<<"Enter a second character:";
	cin>>second;
	
	cout<<"The value of the expression first<second is:"
		<<boolalpha<<(first<second)
		<<endl
		<<"The value of the expression first == second is:"
		<<boolalpha<<(first==second)
		<<endl;	
}

/*��������*/
void testDesicion(){
	cout<<"Enter an integer between 50 and 100:";
	int value = 0;
	cin>>value;
	
	if(value<50){
		cout<<" The value is invalid - it is less than 50."<<endl;
	}	
	
	if(value>100){
		cout<<"The value is invalid - it is greater than 100."<<endl;
	}
	
	cout<<"You entered "<<value<<endl;	
}

/*Ƕ�׵�if*/
void qiantaoif(){
	char letter = 0;
	
	cout<<"Enter a letter: ";
	cin>>letter;
	
	if(letter>='A'){
		if(letter<='Z'){
			cout<<"You entered an uppercase letter."
				<<endl;
		}
	}
	
	if(letter>='a'){
		if(letter<='z'){
			cout<<"You entered an lowercase letter."
				<<endl;
		}
	}
	
	cout<<"You do not enter a letter."<<endl;
}

/*ʹ�ñ�׼���ַ���ת������*/
int convertChar(){
	char letter = 0;
	
	cout<<endl
		<<"Eneter a letter:";
	cin>>letter;
	cout<<endl;
	
	if(isupper(letter)){// �ж��Ƿ�Ϊ��д�ַ� 
		cout<<"You entered a capital letter."
			<<endl;
		cout<<" Converting to lowercase we get "
			<<static_cast<char>(tolower(letter)) // ת��ΪСд�ַ� 
			<<endl;	
		return 0;	
	}
	
	if(islower(letter)){// �ж��Ƿ�ΪСд�ַ� 
		cout<<"You entered a small letter."
			<<endl;
		cout<<" Converting to uppercase we get "
			<<static_cast<char>(toupper(letter))// ת��Ϊ��д�ַ� 
			<<endl; 
		return 0; 
	} 
	
	 cout<<" You id not enter a letter."<<endl;// ��ʾ�����ַ��Ƿ� 
	return -1;
}

/*��չif���*/
void testIfElse(){
	long number = 0;
	cout<<"Enter an integer less than 2billion:";
	cin>>number;
	cout<<endl;
	
	if(number%2==0){
		cout<<"\n Your number is even." 
			<<endl;
	} else{
		cout<<"\n Your number is odd."
			<<endl; 
	}
}

/*���ʹ���߼������*/
void uselogacial(){
	int age = 0;
	int income = 0;
	int balance = 0;
	
	cout<<endl
		<<"Please enter your age in years: ";
	cin>>age;
	
	cout<<"Please enter your annual income in dollars:";
	cin>>income;
	
	cout<<"What is your current account balance in dollars: ";
	cin>>balance;
	cout<<endl;
	
	if(age>=21&&(income>25000||balance>100000)){
		int loan = 0;
		if(2*income<balance/2){
			loan = 2*income;
		}else{
			loan = balance/2;		
		}
		cout<<"You can borrow up to $"
			<<loan
			<<endl;
	}else{
		cout<<"Sorry,we are out of cash today."
			<<endl;
	}
}

/*ʹ�����������*/
void useSanMu(){
	int mice = 0;
	int brown = 0;
	int white = 0;
	
	cout<<" How many brown mice do you have? ";
	cin>>brown;
	
	cout<<" How many white mice do you have? ";
	cin>>white;
	
	mice = brown+white;
	
	cout<<" You have "
		<<mice
		<<(mice--?" mouse":" mice")
		<<" in total. "
		<<endl;	
}

/*switch���*/
void testswitch(){
	int choose = 0;
	cout<<endl
		<<" Your electronic recipe booke is at your service."<<endl
		<<" You can choose from the following delicious dishes:"
		<<endl
		<<"1 Boiled eggs"<<endl
		<<"2 Fired eggs"<<endl
		<<"3 Scrambled eggs"<<endl
		<<"4 Coddled eggs"<<endl
		<<endl<<"Enter your selection number: ";
	cin>>choose;
	switch(choose){
		case 1:
			cout<<endl<<"Boil some eggs. "<<endl;
			break;
		case 2:
			cout<<endl<<"Fry some eggs. "<<endl;
			break;
		case 3:
			cout<<endl<<"Scramble some eggs. "<<endl;
			break;
		case 4:
			cout<<endl<<"Coddle some eggs. "<<endl;
			break;
		default:
			cout<<endl<<"You entered a wrong number, try raw eggs."<<endl;		
	}
}

/*����case*/
void sharecase(){
	char letter = 0;
	cout<<endl
		<<" Enter a letter: " ;
	cin>>letter;
	
	if(isalpha(letter)){
		switch(tolower(letter)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				cout<<endl
					<<" You entered a vowel."// �������Ԫ����ĸ 
					<<endl;
				break;
			default:
				cout<<endl<<" You entered a consonant."
					<<endl;
		}
	}else{
		cout<<endl
			<<" You did not enter a letter."
			<<endl;
	}
}

int main(int argc, char** argv) {
//	testCompare();
//	testDesicion();
//	qiantaoif();
//	convertChar();
//	testIfElse();
//	uselogacial();
//	useSanMu();
//	testswitch();
	sharecase();
	return 0;
}
