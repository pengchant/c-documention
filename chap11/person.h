#ifndef PERSON_H
#define PERSON_H
struct Name{
	char firstname[80];
	char surname[80];
	void show(); 
}; 
struct Date{
	int day;
	int month;
	int year;
	void show();
};
struct Phone{
	int areacode;
	int number;
	void show();
};
struct Person{
	Name name;
	Date birthdate;
	Phone number;
	void show();
	int age(Date& date);
};
#endif
