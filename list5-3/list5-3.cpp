#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class Person {
public:
	Person();
	Person(const char *name);
	Person(const char *name, int age, const char*phonenum);
	Person(const Person &psn);
	~Person() {
		if(name != NULL) delete [] name;
	}
	void init(const char *name, int age, const char *phonenum);
	void setName(const char *name);
	void setAge(const int age) {this->age = age;}
	void setPhonenum(const char *phonenum) {strcpy(this->phonenum,phonenum);}
	char* getName() {return name;}
	int getAge() {return age;}
	char* getPhoneNum() {return phonenum;}
private:
	char *name;
	int age;
	char phonenum[15];
};

Person::Person() {
	name = NULL;
	age = 0;
	phonenum[0]='\0';
}

Person::Person(const char *name) {
	init(name, 0, "");	// 名前だけを設定
}

Person::Person(const char *name, int age, const char*phonenum) {
	init(name, age, phonenum);
}

Person::Person(const Person &psn) {
	init(psn.name, psn.age, psn.phonenum);
}

void Person::init(const char *name, int age, const char *phonenum) {
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
	this->age = age;
	strcpy(this->phonenum, phonenum);
}

void Person::setName(const char *name) {
	if(this->name != NULL) delete [] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

int main() {
	Person shiori1("しおりお嬢さん");
	shiori1.setAge(20);
	shiori1.setPhonenum("222-3333-4444");

	Person shiori2("しおり先生", 30, "001-1111-2222");

	Person shiori3(shiori2);
	shiori3.setName("しおり兄貴");
	shiori3.setAge(30);

	Person *p[] = {&shiori1, &shiori2, &shiori3};

	for(int i=0; i<3;i++) {
		cout << "名前：" << p[i]->getName() <<
				" 年齢：" << p[i]->getAge() <<
				" 電話番号：" << p[i]->getPhoneNum() <<
				endl;
	}

	return 0;
}
