#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r) {
    int l_total_marks = l.math_marks + l.eng_marks;
    int r_total_marks = r.math_marks + r.eng_marks;

    return l_total_marks == r_total_marks ? l.id < r.id : l_total_marks > r_total_marks;
}

int main() {
    int t;
    cin >> t;

    Student a[t];

    for (int i = 0; i < t; i++)
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;


    sort(a, a + t, cmp);


    for (int i = 0; i < t; i++)
        cout
            << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;

    return 0;
}