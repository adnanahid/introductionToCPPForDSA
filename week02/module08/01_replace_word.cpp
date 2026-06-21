#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, x;
        cin >> s >> x;

        size_t position = s.find(x);
        while (position != string::npos) {
            s.replace(position, x.length(), "#");
            position = s.find(x);
        }

        cout << s << endl;
    }

    return 0;
}