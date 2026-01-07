#include<iostream>
using namespace std;
int main()
{
	int list[10];
	cout << "请输入十个数" << endl;
	for (int i = 0; i < 10; i++)
		cin >> list[i];
	bool changed;
	do {
		changed = false;
		for (int j = 0; j < 9; j++)
		{
			if (list[j] > list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
		cout << "排序后的结果：" << endl;
	for (int i = 0; i < 10; i++)
		cout << list[i] << " ";
	return 0;

}