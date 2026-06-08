#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t) {
        int n, s;
        cin >> n >> s;

        int a[101];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool found = false;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                for (int k = j + 1; k < n; k++)
                    if (a[i] + a[j] + a[k] == s)
                        found = true;

        cout << (found ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}