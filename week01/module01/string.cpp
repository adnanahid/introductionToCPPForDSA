#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    string fullname;
    getline(cin, fullname);
    cout << x << endl
         << fullname << endl;
    return 0;
}