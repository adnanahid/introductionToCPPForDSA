#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
    int id;
    string name;
    char section;
    int marks;
};

int main() {
    int t;
    cin >> t;
    while (t) {
        Student s1;
        cin >> s1.id >> s1.name >> s1.section >> s1.marks;

        Student s2;
        cin >> s2.id >> s2.name >> s2.section >> s2.marks;

        Student s3;
        cin >> s3.id >> s3.name >> s3.section >> s3.marks;

        string max;

        if (s1.marks >= s2.marks && s1.marks >= s3.marks) {
            cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.marks;
        } else if (s2.marks >= s1.marks && s2.marks >= s3.marks) {
            cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.marks;
        } else {
            cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.marks;
        };

        cout << endl;
        t--;
    }

    return 0;
}