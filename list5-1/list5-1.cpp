#include <iostream>
using namespace std;

class MikanBox {
public:
	MikanBox() {
		cout << "MikanBoxオブジェクト生成" << endl;
	}
	~MikanBox() {
		cout << "MikanBoxオブジェクト任務終了" << endl;
	}
};

int main() {
	MikanBox *pMikanBox = new MikanBox;
	delete pMikanBox;
	return 0;
}
