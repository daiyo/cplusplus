#include <iostream>
using namespace std;

void changeValue(double &a) {
	a = 200;
}

int main() {
	double num1 = 100;
	cout << "num1 = " << num1 << endl;

	changeValue(num1);
	cout << "num1 = " << num1 << endl;
	return 0;
}
