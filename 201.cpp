#include <iostream>
using namespace std;
int main() {
	char inputChar;
	cout << "请输入一个字符：";
	cin >> inputChar;
	if (inputChar >= 'A' && inputChar <= 'Z') {
		cout << "该字符是大写字母。" << endl;
	} else if(inputChar >= 'a' && inputChar <= 'z') {
		cout << "该字符是小写字母。" << endl;
	} else if(inputChar >= '0' && inputChar <= '9') {
		cout << "该字符是数字。" << endl;
	} else {
		cout << "该字符是其他字符。" << endl;
	}
	return 0;
}
