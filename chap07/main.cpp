#include <iostream>
#include <iomanip>
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

/*把数组名用作指针*/
void useArrayNameAsPointer(){
	const int max = 100;
	long primes[max] = {2,3,5};
	int count = 3;// 计数器让其<100,防止数组越界 
	long trial = 5;// 当前最大的素数 
	bool isprime = true;// 标记是否为素数(默认为true) 
	
	do{
		trial += 2;
		int i = 0;
		do{
			// 求trial+2之后与前面求余是否>0(>0表示素数=>isprime=true) 
			isprime = trial %*(primes+i)>0;				
		}while(++i<count&&isprime);// 循环的条件为没有超过上限，且isprime==true 
		if(isprime){// 判断是否为素数，若为素数则加入数组中，count同时累加 
			*(primes+count++) = trial;
		}
	}while(count<max);// 循环条件为数组未越界 
	
	// 输出结果
	for(int i = 0;i<max;i++){
		if(i%5==0){// 超过五个换行处理 
			cout<<endl;
		}
		// 控制行间距，使用*(primes+i)的形式访问数组中的元素 
		cout<<setw(10)<<*(primes+i);
	}	 
	cout<<endl;
}

/*对多维数组使用指针表示法*/ 
void useMultiArrayPointer(){
	const int table = 12;
	long values[table][table] = {0};
	
	for(int i = 0;i<table;i++){
		for(int j = 0;j<table;j++){
			*(*(values+i)+j) = (i+1)*(j+1);
		}
	}
	
	// 输出表头
	cout<<"     |" ;
	for(int i = 1;i<=table;i++){
		cout<<" "<<setw(3)<<i<<" |" ;
	} 
	cout<<endl;
	
	// 创建分割线
	for(int i = 0;i<=table;i++){
		cout<<"------";
	} 
	cout<<endl;
	
	// 输出数据
	for(int i = 0;i<table;i++){
		cout<<" " <<setw(3)<<i+1<<" |";
		// 输出每行值
		for(int j = 0;j<table;j++){
			cout<<" "<<setw(3)<<values[i][j]<<" |";
		} 
		cout<<endl;
	} 
}

/*使用自由存储区*/
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
	
	// 输出结果
	for(int i = 0;i<max;i++){
		if(i%5==0){
			cout<<endl;
		}
		cout<<setw(10)<<*(primes+i);
	} 
	cout<<endl;
	// 删除内存空间
	delete []  primes;
	primes = 0;	
}

/*给字符串排序*/
void sortString(){	
	string text; 
	const string separators = " ,.\"\n";
	// 提示用户输入 
	cout<<endl
		<<"Enter a string terminated by #:"
		<<endl;
	getline(cin,text,'#'); 
	
	// 创建指向单词的指针数组，切割句子的单词 
	size_t start = text.find_first_not_of(separators);
	size_t end = 0;
	int word_count = 0;// 单词计数   
	while(start!=string::npos){
		end = text.find_first_of(separators,start+1);
		if(end==string::npos){
			end = text.length();
		}
	    word_count++;
		start = text.find_first_not_of(separators,end+1);			 	
	}
	
	// 指向单词的指针数组,即数组的数组  
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
		
	// 对单词进行排序(简单选择排序) 
	int lowest = 0;
	for(int j = 0;j<word_count-1;j++){
		lowest = j;
		for(int i = j+1;i<word_count;i++){
			if(*pwords[i]<*pwords[lowest]){
				lowest = i;
			}
		}
		// 如果找到最小的就开始交换(交换位置)
		if(lowest!=j){
			string* ptemp = pwords[j];
			pwords[j] = pwords[lowest];
			pwords[lowest] = ptemp;
		}				
	} 
	
	// 格式化输出(规则：相同首字母在一行，不同则换行，每行超过6个继续换行) 
	char ch = (*pwords[0])[0];
	int words_in_line = 0;
	for(int i = 0;i<word_count;i++){
		// 如果出现不一样的首字母，换行,且标记新的首字母，将行字母数赋值为0 
		if(ch!=(*pwords[i])[0]){
			cout<<endl;
			ch = (*pwords[i])[0];
			words_in_line = 0;
		}
		cout<<*pwords[i]<<" ";
		// 如果每行有6个字母换行 
		if(++words_in_line==6){
			cout<<endl;
			words_in_line = 0;
		}
	}	
	
	// 释放内存
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
