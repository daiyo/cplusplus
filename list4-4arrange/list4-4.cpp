#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;

class Student {		// 生徒クラス
public:
	void setID(int id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
	}
	int getID() {
		return id;
	}
	string getName() const {
		return name;
	}
private:
	int id;			// 生徒ID
	string name;	// 名前
};

// 科目名
enum Subjects{Math, English, Science};

class Exam {
public:
	void setInfo(int id, string name, Subjects s, int point);
	int getPoint() const {
		return point;
	}
	void getResult(string buf) const;

	Student student;
private:
	Subjects subject;	// 科目
	int point;			// 点数
};

void Exam::setInfo(int id, string name, Subjects subject, int point) {
	student.setID(id);
	student.setName(name);
	this->subject = subject;
	this->point = point;
}

void Exam::getResult(string buf) const {
	string subname[] = {"数学", "英語", "理科", };
	ostringstream sPoint;
	sPoint << point;
	buf = subname[subject]+":"+sPoint.str()+"点";
	cout << buf;
}

void printResult(const Exam &exam) {
	cout << exam.student.getName() << endl;
	string buf;
	exam.getResult(buf);
	cout << buf << endl;
}

double getAvg(const Exam *exam, int cnt) {
	double sum = 0;
	for(int i=0; i<cnt; i++) {
		sum += exam[i].getPoint();
	}

	return sum / cnt;
}

int main() {
	Exam exam[3];

	exam[0].setInfo(1, "とぴあ", Math, 60);
	exam[1].setInfo(1, "とぴあ", English, 75);
	exam[2].setInfo(1, "とぴあ", Science, 88);

	printResult(exam[0]);
	printResult(exam[1]);
	printResult(exam[2]);
	cout << endl;
	cout << "平均：" << getAvg(exam, 3) << "点" << endl;

	return 0;
}
