#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int num;
	int& newnum = num;

	cout << "numアドレス" << &num << endl;
	cout << "newnumアドレス" << &newnum << endl;

	num = 200;
	cout << "num = " << num << endl;
	cout << "newnum = " << newnum << endl;

	newnum = 400;

	cout << "num = " << num << endl;
	cout << "newnum = " << newnum << endl;

	return 0;
}
