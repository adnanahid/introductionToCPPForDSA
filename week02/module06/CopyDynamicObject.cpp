#include <bits/stdc++.h>
using namespace std;

class Footballer {
    public:
    string country;
    int jersy;
    Footballer(string country, int jersy) {
        this->country = country;
        this->jersy = jersy;
    }
};

int main() {
    Footballer* messi = new Footballer("Argentina", 10);
    Footballer* rolando = new Footballer("Portugal", 9);


    *rolando = *messi;

    delete messi;

    cout << rolando->jersy << " " << rolando->country << endl;

    return 0;
}