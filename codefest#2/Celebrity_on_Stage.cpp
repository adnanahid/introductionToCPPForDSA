#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int byMe = 0;
    int byOthers = 0;
    for (int i = 1; i <= n; i++) {
        if (i < k && a[i] > a[k]) byOthers++;
        if (i > k && a[i] < a[k]) byMe++;
    }
    cout << byOthers << " " << byMe << endl;
    return 0;
}