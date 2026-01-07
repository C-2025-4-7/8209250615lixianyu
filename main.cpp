#include <iostream>
#include "student.h"

int main() {
    Student stud; 
    stud.set_value(007, "tcg", 'M'); 
    stud.display();  

    Student stud1(100, "Alice", 'F'); 
    stud1.display();  

    return 0;
}
