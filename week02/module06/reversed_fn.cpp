// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

// for (int i = 0; i < n / 2; i++) {
//     int temp = a[i];
//     a[i] = a[n - i - 1];
//     a[n - i - 1] = temp;
// }

// reverse(a, a + n);

// for (int i = 0; i < n; i++)
//     cout << a[i] << " ";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hello world";
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}