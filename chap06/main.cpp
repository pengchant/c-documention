#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

/*使用数组*/
void useArray(){
	int height[10];
	int count = 0;
	const int max_heights = 10; 
	char reply = 0;
	do{
		cout<<endl
			<<"Enter a height as an integral number of inches: ";
		cin>>height[count++];
		cout<<"Do you want to enter another (yor n)? ";
		cin>>reply;
	}while(count<max_heights&&tolower(reply)=='y');
	
	if(count == max_heights){
		cout<<endl
			<<"Maxium height count reached."<<endl;
	}
	// 计算平均值 
	double average = 0.0;
	for(int i = 0;i<count;i++){
	 	average += height[i];
	}
	average /= count;
	cout<<endl
		<<"Average height is "<<average<<" inches."
		<<endl;
		
	// 统计有多少人在平均分以上
	int above_average = 0;
	for(int i = 0;i<count;i++){
		if(height[i]>average){
			above_average++;
		}
	} 
	
	// 输出结果
	cout<<"There " 
		<<(above_average ==1?"is ":"are ")
		<<above_average<<" height"
		<<(above_average==1?" ":"s ")
		<<"above average."
		<<endl;	
}

/*初始化数组*/
void initArray(){
	const int size = 5;
	int values[size] = {1,2,3};
	double junk[size];
	
	cout<<endl;
	for(int i = 0;i<size;i++){
		cout<<" "<<setw(12)<<values[i];
	}
	cout<<endl;
	
	for(int i = 0;i<size;i++){
		cout<<" "<<setw(12)<<junk[i];
	}
	cout<<endl;
		
}

/*获取数组的元素个数*/
void getArrayLength(){
	int values[] = {2,3,4,5,6,7,8,9}; 
	cout<<endl
		<<"There are "
		<<sizeof values/sizeof values[0]
		<<" elements in the array."
		<<endl;
	int sum = 0;
	for(int i = 0;i<sizeof values/sizeof values[0];sum+=values[i++]);
	cout<<"The sum of the array elements is "<<sum
		<<endl;
}

/*计算一行字符里面的元音字母*/
void countVowels(){
	const int maxlength = 100;
	char text[maxlength] = {0};
	
	cout<<endl
		<<"Enter a line of text: "
		<<endl;
	cin.getline(text,maxlength,'!');
	
	cout<<"You entered:"
		<<endl
		<<text<<endl;
	
	// 标记元音和辅音
	int vowels = 0;
	int consonants = 0;
	// 遍历字符 
	for(int i = 0;text[i]!='\0';i++){
		if(isalpha(text[i])){// 如果是字符 
			switch(tolower(text[i])){
				case 'a':case 'e':case 'i':
				case 'o':case 'u':
					vowels++;
					break;
				default:
					consonants++;
			}
		}
	} 
	
	// 输出统计的数据
	cout<<"Your input contained " 
		<<vowels<<" vowels and " 
		<<consonants<<" consonants."
		<<endl;
}

/*使用二位字符数组*/
void useCharArray(){
	char stars[][80] = {
		"Robert Redford",
		"Hopalong Cassidy",
		"Lassie",
		"Slim Pickens",
		"Boris Karloff",
		"Mae West",
		"Oliver Hardy",
		"Sharon Stone"
	};
	int choice = 0;
	cout<<endl
		<<"Pick a lucky star!"
		<<" Enter a number between 1 and "
		<<sizeof stars/sizeof stars[0]<<": ";
	cin>>choice;
	if(choice>=1&&choice<=sizeof stars / sizeof stars[0]){
		cout<<endl
			<<"Your lucky star is "<<stars[choice-1];
	}else{
		cout<<endl
			<<"Sorry,you haven't got a lucky star.";
	}
	cout<<endl;
}

/*连接字符串*/ 
void linkString(){
	string first;
	string second;
	
	cout<<endl
		<<"Enter your first name: ";
	cin>>first;
	
	cout<<"Enter your second name: ";
	cin>>second;
	
	string sentence = "Your full name is ";
	sentence += first+" "+second+".";
	
	cout<<endl
		<<sentence
		<<endl;
	cout<<"The string contains "
		<<sentence.length()
		<<" characters."
		<<endl;		
} 

/*访问字符*/ 
void accessString() {
	string text;
	cout<<endl
		<<"Enter a line of text: "
		<<endl;
	getline(cin,text);
	
	int vowels = 0;
	int consonants = 0;
	for(int i = 0;i<text.length();i++){
		if(isalpha(text[i])){
			switch(tolower(text[i])){
				case 'a':case 'e':case 'i':
				case 'o':case 'u':
					vowels++;
					break;
				default:
					consonants++;
			}
		}
	}
	
	cout<<"Your input contained "
		<<vowels<<" vowels and "
		<<consonants<<" consonants."
		<<endl;
}

/*比较字符串*/
void compareString(){
	const int max_names = 6;
	string names[max_names];
	int count = 0;
	char answer = 0;
	
	do{
		cout<<"Enter a name: ";
		cin>>names[count++];
		
		cout<<"Do you want to enter another name(y/n)? ";
		cin>>answer;
	}while(count<max_names&&tolower(answer)=='y');
	
	if(count == max_names){
		cout<<endl
			<<"Maximum name count reached."
			<<endl;
	}
	int index_of_max = 0;
	int index_of_min = 0;
	for(int i = 1;i<count;i++){
		if(names[i]>names[index_of_max]){
			index_of_max = i;
		}else if(names[i]<names[index_of_min]){
		 	index_of_min = i;
		}
	}
	cout<<endl
		<<"The minmum name is "<<names[index_of_min]
		<<endl;
	cout<<endl
		<<"The maximum name is "<<names[index_of_max]
		<<endl;
}

/*搜索字符串*/
void searchString(){
	string text = "Smith,where Jones had had \" had had \",had had \"had\"."
				"\n \" Had had \" had had teh examiners' aproval.";
	string word = "had";
	
	cout<<endl
		<<"The string is: "
		<<endl
		<<text
		<<endl;
	int count = 0;
	for(int index = 0;(index=text.find(word,index))!=string::npos;index+=word.length(),count++);
	cout<<"Your text contained "	
		<<count<<" occurrences of \""
		<<word<<"\"."
		<<endl;
}

/*查找给定字符集合中的字符*/
void searchCharSet(){
	string text = "Smith,where Jones had had \" had had\",had had \"had\"."
					" \"Had had\" had had the examiners' approval.";
	string separators = " ,.\"";
	// 查找第一个单词开始的位置 
	size_t start = text.find_first_not_of(separators);
	size_t end = 0;
	// 单词计数 
	int word_count = 0;
	while(start!=string::npos){
		// 查找当前单词结尾的索引 
		end = text.find_first_of(separators,start+1);
		// 若到尾则赋值最后一个索引 
		if(end == string::npos){
			end = text.length();
		}
		// 输出截取的字符串 
		cout<<text.substr(start,end-start)// 从start开始截取end-start 个 
			<<endl;
		// 单词数累加 
		word_count++;
		// 从end开始继续寻找下一个单词的开始位置 
		start = text.find_first_not_of(separators,end+1);
	}
	// 输出统计结果 
	cout<<"Your string contained "
		<<word_count<<" words."
		<<endl;
}

/*替换子字符串*/
void replaceSubStr(){
	string text;
	cout<<"Enter a string terminated by #:"<<endl;
	getline(cin,text,'#');
	
	string word;
	cout<<endl
		<<"Enter the word to be replaced: ";
	cin>>word;
	
	string replacement;
	cout<<endl
		<<"Enter the replacement word: " ;
	cin>>replacement;
	
	if(word == replacement){
		cout<<endl
			<<"The word and its replacement are the same."
			<<endl
			<<"Operation aborted."
			<<endl;
		exit(1);
	}
	
	size_t start = text.find(word);
	
	while(start!=string::npos) {
		// 替换字符 
		text.replace(start,word.length(),replacement);
		// 继续寻找start+replacement.length()之后的下一个单词 
		start = text.find(word,start+replacement.length());
	}
	
	// 输出结果
	cout<<endl
		<<"Your string is now: " 
		<<endl
		<<text<<endl;		
}

int main(int argc, char** argv) {
//	useArray();
//	initArray();
//	getArrayLength();
//	countVowels(); s
//	useCharArray();
//	linkString();
//	accessString();
//	compareString();
//	searchString();
//	searchCharSet(); 
	replaceSubStr();
	return 0;
}
