#include<iostream>
using namespace std;
int main()
{
	int distinct[10];
	int count = 0;
	cout << "Entern ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		bool isNew = true;
		for (int j = 0; j < count; j++)
		{
			if (distinct[j] == num)
			{
				isNew = false;
				break;
			}
		}
		if (isNew)
		{
			distinct[count] = num;
			count++;
		}
	}
	cout << "The distnct numbers are:";
	for (int i = 0; i < count; i++)
	{
		cout << distinct[i] << " ";
	}
	return 0;
}