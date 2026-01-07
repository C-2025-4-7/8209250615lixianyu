#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double fahrenheit;
	cout << "请输入华氏温度：";
	cin >> fahrenheit;
	double celsius = (5.0 / 9.0) * (fahrenheit - 32);
	cout << "对应的摄氏温度是：" << fixed << setprecision(2) << celsius << "°C" << endl; 
	return 0;
}