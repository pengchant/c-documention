#include <iostream>
#include <iomanip>
#include <cctype>

/*ָ��*/ 
using namespace std;

/*��������* */
void usejianjie(){
	long number = 50l;
	long* pnumber;
	pnumber = &number;
	cout<<endl
		<<"The value stored in the variable number is "
		<<*pnumber
		<<endl;		
}

/*��ϰʹ��ָ��*/
void usePointer(){
	long *pnumber;
	long number1 = 55l;
	long number2 = 99l;
	
	pnumber = &number1;// pnumber->number1�ĵ�ַ 
	*pnumber+=1l;// *pnumber = 56l = number1
	cout<<endl
		<<"number1="<<number1// number1 = 56l
		<<" &number1="<<pnumber// number1�ڴ�ĵ�ַ 
		<<endl;
	
	pnumber = &number2;// pnumber->number2�ĵ�ַ 
	number1 = *pnumber*10;// *pnumber = 99l,number1 = 990l;
	
	cout<<" number1= "<<number1// number1 = 990l;
		<<" pnumber= "<<pnumber// pnumber=number2���ڴ��ַ 
		<<" *pnumber= "<<*pnumber// *pumber = number2 = 99l;
		<<endl;
}

/*ָ��ʹ��*/
void luckstar(){
	const char* pstar1 = "Mae West";
	const char* pstar2 = "Aronld Schwarzenegger";
	const char* pstar3 = "Lassie";
	const char* pstar4 = "Slim Pickens";
	const char* pstar5 = "Greta Garbo";
	const char* pstar6 = "Oliver Hardy";
	const char* pstr = "Your lucky star is ";
	
	int choice = 0;
	
	cout<<endl
		<<"Pick a lucky star!"
		<<" Enter a number between 1 and 6: ";
	cin>>choice;
	
	cout<<endl;
	
	switch(choice){
		case 1:
			cout<<pstr<<pstar1;
			break;
		case 2:
			cout<<pstr<<pstar2;
			break;
		case 3:
			cout<<pstr<<pstar3;
			break;
		case 4:
			cout<<pstr<<pstar4;
			break;
		case 5:
			cout<<pstr<<pstar5;
			break;
		case 6:
			cout<<pstr<<pstar6;
			break;
		default:
			cout<<"Sorry, you haven't got a lucky star.";
	}
	cout<<endl;
}

/*ʹ��ָ������*/
void usePointArray(){
	const char* pstars[] = {
		"Allen","Bolb","Cemon","Danel","Edison","Frank"
	};
	const char* pstr = "Your lucky star is ";
	int choice = 0;
	
	const int starCount = sizeof pstars/sizeof pstars[0];
	
	cout<<endl
		<<"Pick a lucky star!"
		<<" Enter a number between 1 and "
		<<starCount
		<<": ";
	cin>>choice;
	
	cout<<endl;
	if(choice>=1&&choice<=starCount){
		cout<<pstr<<pstars[choice-1];
	}else{
		cout<<"Sorry,you haven't got a lucky star.";
	}
	cout<<endl;
}

/*ʹ��ָ����ַ�������*/ 
void sortChart(){
	string text;
	const string separators = " ,.\n";
	const int max_words = 1000;
	string words[max_words];
	string* pwords[max_words];
	
	cout<<endl
		<<"Enter a string teminated by#��"
		<<endl;
	getline(cin,text,'#');
	
	int start = text.find_first_not_of(separators);
	int end = 0;
	int word_count = 0;
	while(start!=string::npos&&word_count<max_words){
		end = text.find_first_of(separators,start+1);
		if(end == string::npos){
			end = text.length();
		}
		words[word_count] = text.substr(start,end-start);
		pwords[word_count] = &words[word_count];
		word_count++;
		start = text.find_first_not_of(separators,end+1);
	}
	
	// ����ѡ�� 
	int lowest = 0;
	for(int j = 0;j<word_count-1;j++){
		lowest = j; 
		for(int i = j+1;i<word_count;i++){
			if(*pwords[i]<*pwords[lowest]){
				lowest = i;
			}
		}
		if(lowest!=j){// ����ҵ���Сֵ�ͽ��� 
			string* ptemp = pwords[j];
			pwords[j] = pwords[lowest];
			pwords[lowest] = ptemp;
		}
	} 
	
	// ������
//	for(int i = 0;i<word_count;i++){
//		cout<<*pwords[i]
//			<<endl;
//	} 
	// ��ʽ����� 
	char ch = (*pwords[0])[0];
	int words_in_line = 0;
	for(int i = 0;i<word_count;i++){
		if(ch!=(*pwords[i])[0]){// �����������һ������ĸ��Ҳ���С� 
			cout<<endl;
			ch = (*pwords[i])[0];
			words_in_line = 0;
		}
		cout<<*pwords[i]<<" ";// ��� 
		if(++words_in_line == 6){// �������6���ͻ��� 
			cout<<endl;
			words_in_line = 0;
		}
		
	} 	 
}

/*������������ָ��*/
void useArrayNameAsPointer(){
	const int max = 100;
	long primes[max] = {2,3,5};
	int count = 3;// ����������<100,��ֹ����Խ�� 
	long trial = 5;// ��ǰ�������� 
	bool isprime = true;// ����Ƿ�Ϊ����(Ĭ��Ϊtrue) 
	
	do{
		trial += 2;
		int i = 0;
		do{
			// ��trial+2֮����ǰ�������Ƿ�>0(>0��ʾ����=>isprime=true) 
			isprime = trial %*(primes+i)>0;				
		}while(++i<count&&isprime);// ѭ��������Ϊû�г������ޣ���isprime==true 
		if(isprime){// �ж��Ƿ�Ϊ��������Ϊ��������������У�countͬʱ�ۼ� 
			*(primes+count++) = trial;
		}
	}while(count<max);// ѭ������Ϊ����δԽ�� 
	
	// ������
	for(int i = 0;i<max;i++){
		if(i%5==0){// ����������д��� 
			cout<<endl;
		}
		// �����м�࣬ʹ��*(primes+i)����ʽ���������е�Ԫ�� 
		cout<<setw(10)<<*(primes+i);
	}	 
	cout<<endl;
}

/*�Զ�ά����ʹ��ָ���ʾ��*/ 
void useMultiArrayPointer(){
	const int table = 12;
	long values[table][table] = {0};
	
	for(int i = 0;i<table;i++){
		for(int j = 0;j<table;j++){
			*(*(values+i)+j) = (i+1)*(j+1);
		}
	}
	
	// �����ͷ
	cout<<"     |" ;
	for(int i = 1;i<=table;i++){
		cout<<" "<<setw(3)<<i<<" |" ;
	} 
	cout<<endl;
	
	// �����ָ���
	for(int i = 0;i<=table;i++){
		cout<<"------";
	} 
	cout<<endl;
	
	// �������
	for(int i = 0;i<table;i++){
		cout<<" " <<setw(3)<<i+1<<" |";
		// ���ÿ��ֵ
		for(int j = 0;j<table;j++){
			cout<<" "<<setw(3)<<values[i][j]<<" |";
		} 
		cout<<endl;
	} 
}

/*ʹ�����ɴ洢��*/
void useFreeMemory(){
	int max = 0;
	int count = 3;
	long trial= 5;
	bool isprime = true;
	
	cout<<endl
		<<"Enter the number of plrimes you would like:";
	cin>>max;
	
	long* primes = new long[max];
	*primes = 2;
	*(primes+1) = 3;
	*(primes+2) = 5;
	
	do{
		trial += 2;
		int i = 0; 
		do{
			isprime = trial % *(primes+i)>0;
		}while(++i<count&&isprime);
		if(isprime){
			*(primes+count++) = trial;
		}
	}while(count<max);
	
	// ������
	for(int i = 0;i<max;i++){
		if(i%5==0){
			cout<<endl;
		}
		cout<<setw(10)<<*(primes+i);
	} 
	cout<<endl;
	// ɾ���ڴ�ռ�
	delete []  primes;
	primes = 0;	
}

/*���ַ�������*/
void sortString(){	
	string text; 
	const string separators = " ,.\"\n";
	// ��ʾ�û����� 
	cout<<endl
		<<"Enter a string terminated by #:"
		<<endl;
	getline(cin,text,'#'); 
	
	// ����ָ�򵥴ʵ�ָ�����飬�и���ӵĵ��� 
	size_t start = text.find_first_not_of(separators);
	size_t end = 0;
	int word_count = 0;// ���ʼ���   
	while(start!=string::npos){
		end = text.find_first_of(separators,start+1);
		if(end==string::npos){
			end = text.length();
		}
	    word_count++;
		start = text.find_first_not_of(separators,end+1);			 	
	}
	
	// ָ�򵥴ʵ�ָ������,�����������  
	start = text.find_first_not_of(separators); 	
	string** pwords = new string*[word_count];
	int index = 0; 
	while(start!=string::npos){
		end = text.find_first_of(separators,start+1);
		if(end==string::npos){
			end = text.length();
		}
		pwords[index++] = new string(text.substr(start,end-start));
		start = text.find_first_not_of(separators,end+1);			 	
	}
	
	
	cout<<endl
		<<"Total: "
		<<word_count
		<<endl;
		
	// �Ե��ʽ�������(��ѡ������) 
	int lowest = 0;
	for(int j = 0;j<word_count-1;j++){
		lowest = j;
		for(int i = j+1;i<word_count;i++){
			if(*pwords[i]<*pwords[lowest]){
				lowest = i;
			}
		}
		// ����ҵ���С�ľͿ�ʼ����(����λ��)
		if(lowest!=j){
			string* ptemp = pwords[j];
			pwords[j] = pwords[lowest];
			pwords[lowest] = ptemp;
		}				
	} 
	
	// ��ʽ�����(������ͬ����ĸ��һ�У���ͬ���У�ÿ�г���6����������) 
	char ch = (*pwords[0])[0];
	int words_in_line = 0;
	for(int i = 0;i<word_count;i++){
		// ������ֲ�һ��������ĸ������,�ұ���µ�����ĸ��������ĸ����ֵΪ0 
		if(ch!=(*pwords[i])[0]){
			cout<<endl;
			ch = (*pwords[i])[0];
			words_in_line = 0;
		}
		cout<<*pwords[i]<<" ";
		// ���ÿ����6����ĸ���� 
		if(++words_in_line==6){
			cout<<endl;
			words_in_line = 0;
		}
	}	
	
	// �ͷ��ڴ�
	for(int i = 0;i<word_count;i++){
		delete pwords[i];
	} 
	delete [] pwords;	
}

int main(int argc, char** argv) {
//	usejianjie();
//	usePointer();
//	luckstar();
//	usePointArray();
//	sortChart();
//	useArrayNameAsPointer();
//	useMultiArrayPointer(); 
//	useFreeMemory();
	sortString();
	return 0;
}
