#include <iostream>
#include <cstring>

using namespace std;

class Food{
public:
	void setPrice(int price) {
		this->price = price;
	}

	int getPrice() const {
		return price;
	}

private:
	int price;
};

class Fruit : public Food {
public:
	void setFarmName(const char *farmName) {
		strcpy(this->farmName, farmName);
	}

	const char* getFarmName() const {
		return farmName;
	}

private:
	char farmName[50];
};

int main() {
	Fruit myFruit;

	myFruit.setPrice(150);
	cout << "price = " << myFruit.getPrice() << endl;
	myFruit.setFarmName("しおり農園");
	cout << "farmName = " << myFruit.getFarmName() << endl;


	return 0;
}
