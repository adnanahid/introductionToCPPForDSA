#include <bits/stdc++.h>
using namespace std;

int main() {
    string fullname = "adnan nahid";
    cout << fullname.size() << endl;
    cout << fullname.capacity() << endl;
    cout << fullname.max_size() << endl;
    fullname.clear();
    cout << fullname << endl;

    return 0;
}   