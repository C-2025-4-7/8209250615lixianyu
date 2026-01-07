#include<iostream>
using namespace std;
int peaches(int day)
{
	if (day == 10)
		return 1;
	return(peaches(day + 1) + 1) * 2;
}
int main()
{
	cout << "第一天猴子摘的桃子总数为："
		<< peaches(1) << endl;
	return 0;
}