#include <iostream>
using namespace std;

int main() {
    int age_of_adnan = 23;
    int &age_of_nahid = age_of_adnan;
    cout << age_of_nahid << endl;
    age_of_nahid = 20;
    cout << age_of_nahid << endl;
    return 0;
}