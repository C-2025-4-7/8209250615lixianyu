#include<iostream>
using namespace std;
void gcd_lcm(int m, int n, int& gcd, int& lcm)
{
	int a = m, b = n;
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	gcd = a;
	lcm = m * n / gcd;
}
int main()
{
	int m, n;
	int gcd, lcm;
	cout << "请输入两个自然数m和n:";
	cin >> m >> n;
	gcd_lcm(m, n, gcd, lcm);
	cout << "最大公约数=" << gcd << endl;
	cout << "最小公倍数=" << lcm << endl;
	return 0;
}