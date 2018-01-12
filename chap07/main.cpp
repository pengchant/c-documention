#include <iostream>
#include <cctype>

/*指针*/ 
using namespace std;

/*间接运算符* */
void usejianjie(){
	long number = 50l;
	long* pnumber;
	pnumber = &number;
	cout<<endl
		<<"The value stored in the variable number is "
		<<*pnumber
		<<endl;		
}

/*练习使用指针*/
void usePointer(){
	long *pnumber;
	long number1 = 55l;
	long number2 = 99l;
	
	pnumber = &number1;// pnumber->number1的地址 
	*pnumber+=1l;// *pnumber = 56l = number1
	cout<<endl
		<<"number1="<<number1// number1 = 56l
		<<" &number1="<<pnumber// number1内存的地址 
		<<endl;
	
	pnumber = &number2;// pnumber->number2的地址 
	number1 = *pnumber*10;// *pnumber = 99l,number1 = 990l;
	
	cout<<" number1= "<<number1// number1 = 990l;
		<<" pnumber= "<<pnumber// pnumber=number2的内存地址 
		<<" *pnumber= "<<*pnumber// *pumber = number2 = 99l;
		<<endl;
}

/*指针使用*/
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

/*使用指针数组*/
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

/*使用指针对字符串排序*/ 
void sortChart(){
	string text;
	const string separators = " ,.\n";
	const int max_words = 1000;
	string words[max_words];
	string* pwords[max_words];
	
	cout<<endl
		<<"Enter a string teminated by#："
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
	
	// 排序（选择） 
	int lowest = 0;
	for(int j = 0;j<word_count-1;j++){
		lowest = j; 
		for(int i = j+1;i<word_count;i++){
			if(*pwords[i]<*pwords[lowest]){
				lowest = i;
			}
		}
		if(lowest!=j){// 如果找到最小值就交换 
			string* ptemp = pwords[j];
			pwords[j] = pwords[lowest];
			pwords[lowest] = ptemp;
		}
	} 
	
	// 输出结果
//	for(int i = 0;i<word_count;i++){
//		cout<<*pwords[i]
//			<<endl;
//	} 
	// 格式化输出 
	char ch = (*pwords[0])[0];
	int words_in_line = 0;
	for(int i = 0;i<word_count;i++){
		if(ch!=(*pwords[i])[0]){// 如果遇到另外一个首字母了也换行。 
			cout<<endl;
			ch = (*pwords[i])[0];
			words_in_line = 0;
		}
		cout<<*pwords[i]<<" ";// 输出 
		if(++words_in_line == 6){// 如果超过6个就换行 
			cout<<endl;
			words_in_line = 0;
		}
	}
	
		 
}

int main(int argc, char** argv) {
//	usejianjie();
//	usePointer();
//	luckstar();
//	usePointArray();
	sortChart();
	return 0;
}
