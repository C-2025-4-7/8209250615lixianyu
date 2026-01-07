#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;  
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  
}

int main() {
    int a, b;
    cout << "请输入第一个正整数：";
    cin >> a;
    cout << "请输入第二个正整数：";
    cin >> b;
    int gcdValue = gcd(a, b);
    int lcmValue = lcm(a, b);
    cout << "最大公约数（GCD）: " << gcdValue << endl;
    cout << "最小公倍数（LCM）: " << lcmValue << endl;

    return 0;
}
