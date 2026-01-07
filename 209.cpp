#include <iostream>
using namespace std;

int main() {
    double price_per_apple = 0.8;  
    int apples_today = 2;         
    int total_apples = apples_today;  
    double total_cost = apples_today * price_per_apple;  
    int days = 1;  

    while (apples_today * 2 <= 100) {
        apples_today *= 2;  
        total_apples += apples_today;
        total_cost += apples_today * price_per_apple;
        days++; 
    }
    cout << "总购买的苹果数： " << total_apples << endl;
    cout << "总花费： " << total_cost << "元" << endl;
    cout << "总天数： " << days << "天" << endl;
    cout << "每天平均花费： " << total_cost / days << "元" << endl;

    return 0;
}
