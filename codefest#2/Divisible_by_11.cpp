#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int oddSum = 0, evenSum = 0;
    bool isOdd = true; // rightmost digit is position 1 (odd)

    for (int i = s.size() - 1; i >= 0; i--) {
        int digit = s[i] - '0';

        if (isOdd) oddSum += digit;
        else evenSum += digit;

        isOdd = !isOdd;
    }

    int diff = abs(oddSum - evenSum);

    if (diff % 11 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}