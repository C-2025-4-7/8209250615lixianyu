#include <iostream>
using namespace std;
int mian()
{
	bool locker[101] = { false };
	for (int student = 1; student <= 100; student++)
	{
		for (int i = student; i <= 100; i++)
		{
			locker[i] = !locker[i];
		}
	}
	cout << "开着的柜子编号为：";
	for (int i = 1; i < 100; i++)
	{
		if (locker[1])
			cout << i << " ";
	}
	return 0;
}