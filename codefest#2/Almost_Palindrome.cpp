#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int letter_counts[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            char current_letter = s[i];
            int index = current_letter - 'a';
            letter_counts[index]++;
        }

        int odd_letters = 0;
        for (int i = 0; i < 26; i++)
            if (letter_counts[i] % 2 != 0)
                odd_letters++;

        if (odd_letters <= 1)
            cout << 0 << endl;
        else
            cout << odd_letters - 1 << endl;
    }

    return 0;
}