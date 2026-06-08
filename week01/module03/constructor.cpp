#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
    string name;
    int roll_no;
    string grade;

    Student(string name, int roll_no, string grade) {
        this->name = name;
        this->roll_no = roll_no;
        this->grade = grade;
    }
};
int main() {
    Student s1("Sajib Shikdar", 23, "A+");
    cout << s1.name << " " << s1.roll_no << " " << s1.grade << endl;

    Student s2("Adnan Nahid", 23, "A+");
    cout << s2.name << " " << s2.roll_no << " " << s2.grade << endl;

    return 0;
}