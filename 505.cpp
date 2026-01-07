#include <iostream>
using namespace std;

class Point {
private:
    int x, y; 

public:
    Point() {
        x = 60;
        y = 80;
    }

    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    void display() const {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;  
    cout << "Initial ";
    p1.display();
    p1.setPoint(10, 20);  
    cout << "Modified ";
    p1.display();

    return 0;
}
