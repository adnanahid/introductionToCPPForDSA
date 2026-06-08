#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
    string name;
    int age;
    int roll_no;
    string grade;

  private:
    string email;
    string password;
};

int main() {
    Student s1;
    getline(cin, s1.name);
    cin >> s1.age >> s1.roll_no >> s1.grade;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.roll_no << endl;
    cout << "Grade: " << s1.grade << endl;

    Student s2;
    cin.ignore();
    getline(cin, s2.name);
    cin >> s2.age >> s2.roll_no >> s2.grade;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Roll No: " << s2.roll_no << endl;
    cout << "Grade: " << s2.grade << endl;

    return 0;
}