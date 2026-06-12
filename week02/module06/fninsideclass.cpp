#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
    string name;
    int roll;
    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }
    void greet() {
        cout << "hello " << this->name << endl;
    }
};

int main() {
    Student stu1("Sajib Shikdar", 101);
    Student stu2("Nahid Hasan", 102);
    stu1.greet();   
    stu2.greet();
    return 0;
}