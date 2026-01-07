#include<iostream>
using namespace std;

class Student {
public:
	int id;
	double score;

	void set_value(int id, double score) {
		this->id = id;
		this->score = score;
	}

	void display() const{
		cout << "ID: " << id << ", Score: " << score << endl;
	}

};

void max(Student* students, int size) {
	int maxIndex = 0;
	for (int i = 1; i < size; ++i) {
		if (students[i].score > students[maxIndex].score) {
			maxIndex = i; 
		}
	}
	cout << "成绩最高的学生id是： " << students[maxIndex].id << endl;
}


int main() {
	Student students[5];

	for (int i = 0; i < 5; ++i) {
		int id;
		double score;
		cout << "请输入学生id和成绩 " << i + 1 << ": ";
		cin >> id >> score;
		students[i].set_value(id, score);
	}

	max(students, 5);

	return 0;
}