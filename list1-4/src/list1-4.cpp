#include <stdio.h>

class MikanBox {
public:
	void add(int addmikan);
	void del(int delmikan);
	void empty();
	// インライン関数
	int getTotal() {
		return total;
	}
private:
	int total;
};

// 普通はこちらで定義
void MikanBox::add(int addmikan) {
	total += addmikan;
}


void MikanBox::del(int delmikan) {
	total -= delmikan;
	if(total < 0) empty();
}

void MikanBox::empty() {
	total = 0;
}

int main() {
	MikanBox myMikanBox;

	myMikanBox.empty();
	myMikanBox.add(5);
	myMikanBox.del(2);
	printf("箱の中のみかん：%d個\n", myMikanBox.getTotal());

}
