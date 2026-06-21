// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string nm;
//     int cls;
//     char s;
//     int id;
// };

// int main() {
//     int t;
//     cin >> t;

//     Student a[t];

//     for (int i = 0; i < t; i++)
//         cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;


//     for (int i = 0; i < t / 2; i++) {
//         char temp = a[i].s;
//         a[i].s = a[t - 1 - i].s;
//         a[t - 1 - i].s = temp;
//     }


//     for (int i = 0; i < t; i++)
//         cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> nm(n);
    vector<int> cls(n), id(n);
    vector<char> s(n);

    for (int i = 0; i < n; i++)
        cin >> nm[i] >> cls[i] >> s[i] >> id[i];

    int l = 0, r = n - 1;
    while (l < r)
        swap(s[l++], s[r--]);

    for (int i = 0; i < n; i++)
        cout << nm[i] << " " << cls[i] << " " << s[i] << " " << id[i] << "\n";

    return 0;
}