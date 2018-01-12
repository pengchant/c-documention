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

int main(int argc, char** argv) {
//	useArray();
//	initArray();
//	getArrayLength();
//	countVowels(); 
//	useCharArray();
	linkString();
	return 0;
}
