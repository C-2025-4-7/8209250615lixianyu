#include<iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius, height;
    cout << "请输入圆锥底部的半径：";
    cin >> radius;
    cout << "请输入圆锥的高度：";
    cin >> height;
    double volume = (1.0 / 3.0) * PI * radius * radius * height;
    cout << "圆锥的体积是：" << volume << endl;

    return 0;
}