#include <iostream>
using namespace std;

int main() {
    int age_of_ad = 23;
    int &age_of_nd = age_of_ad;

    age_of_nd = 20;
    cout << age_of_ad;
    return 0;
}