#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    string word;
    int count = 0;
    
    while (ss >> word) {
        string lower_word = word;
        transform(lower_word.begin(), lower_word.end(), lower_word.begin(), ::tolower);
        
        if (lower_word == "phitron") {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}