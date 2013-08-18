#include <iostream>
#include <cstring>
using namespace std;

struct Person{
	char name[50];
	int age;
};

void printPersonRef(const Person &psn) {
	cout << psn.name << "さん " << psn.age << "歳" << endl;
}

void printPersonPtr(const Person *psn) {
	cout << psn->name << "さん " << psn->age << "歳" << endl;
}

int main() {
//	int array[10];
	int aref[10] = {0};
	char str[20];

	strcpy(str, "abcdefg");

	for(int i=0; i<10; i++) {
		cout << aref[i] << " ";
	}
	cout << endl;

	cout << str << endl;

	Person shain1 = {"Topia", 18};
	printPersonRef(shain1);
	printPersonPtr(&shain1);
	return 0;
}
