#include <iostream>
#include <string.h>

char name[] = "グローバルなとぴあちゃん";

class Shouhin {
public:
	Shouhin();
private:
	char name[100];
};

Shouhin::Shouhin(){
	char name[] = "ローカルなとぴあちゃん";
	strcpy(Shouhin::name, "メンバ変数のとぴあちゃん");

	std::cout<< "name = " << name << std::endl;
	std::cout<< "name = " << Shouhin::name << std::endl;
	std::cout<< "name = " << ::name << std::endl;
}

int main() {
	Shouhin myshouhin;
	return 0;
}
