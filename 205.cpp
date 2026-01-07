#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char c;
	int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;
	cout << "请输入一行字符，以#结束：" ;
	while (cin.get(c) && c != '#')
	{
		if (isalpha(c))
			letterCount++;
		else if (isspace(c))
			spaceCount++;
		else if (isdigit(c))
			digitCount++;
		else
			otherCount++;
	}
	cout << "英文字母个数：" << letterCount << endl;
	cout << "空格个数：" << spaceCount << endl;
	cout << "数字个数：" << digitCount << endl;
	cout << "其他字符个数：" << otherCount << endl;
	return 0;
}
