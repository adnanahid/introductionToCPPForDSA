// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     //static
//     int x = 10;
//     cout << x << endl;

//     //dynamic
//     int *p = new int;
//     *p = 100;
//     cout << *p << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int *p;

void fun() {
    int *x = new int;
    *x = 10;
    p = x;
    cout << "from fun " << *p << endl;
    delete x;
    return;
}

int main() {
    fun();
    cout << "from main " << *p << endl;
    return 0;
}