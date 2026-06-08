#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence;
    while (getline(cin, sentence)) {
        sort(sentence.begin(), sentence.end());
        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] == ' ') continue;
            cout << sentence[i];
        }
        cout << endl;
    }

    return 0;
}