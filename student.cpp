#include "student.h"
#include <iostream>
using namespace std;

Student::Student() : id(0), name("Unknown"), gender('U') {}

Student::Student(int id, string name, char gender) : id(id), name(name), gender(gender) {}

void Student::set_value(int id, string name, char gender) {
    this->id = id;
    this->name = name;
    this->gender = gender;
}

void Student::display() const {
    cout << "Student ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
}
