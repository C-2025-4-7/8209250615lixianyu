#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    char gender;

public:
    Student(); 
    Student(int id, string name, char gender); 

    void set_value(int id, string name, char gender); 
    void display() const; 
};

#endif
