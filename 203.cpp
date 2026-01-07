#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "请输入三角形的三条边：";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) {
        double perimeter = a + b + c;
        cout << "三角形的周长是：" << perimeter << endl;

        if (a == b || b == c || a == c) {
            cout << "这是一个等腰三角形" << endl;
        }
        else {
            cout << "这不是一个等腰三角形" << endl;
        }
    }
    else {
        cout << "这三条边不能构成一个三角形" << endl;
    }

    return 0;
}