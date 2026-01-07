#include<iostream>
using namespace std;

class Cuboid {
	private:
	double length;
	double width;
	double height;

public:
		void set_value() {
			cout << "请输入长、宽、高: ";
			cin >> length >> width >> height;
		}
		double calculate_volume() {
			return length * width * height;
		}
		void display_volume() {
			cout << "长方体体积是: " << calculate_volume() << endl;
		}

};


int main() {
	Cuboid cuboid1, cuboid2, cuboid3;
	cout << "请输入第一个长方体的信息:" << endl;
	cuboid1.set_value();

	cout << "请输入第二个长方体的信息:" << endl;
	cuboid2.set_value();

	cout << "请输入第三个长方体的信息:" << endl;
	cuboid3.set_value();

	cout << "第一个长方体的体积:" << endl;
	cuboid1.display_volume();

	cout << "第二个长方体的体积:" << endl;
	cuboid2.display_volume();

	cout << "第三个长方体的体积:" << endl;
	cuboid3.display_volume();

	return 0;
}

