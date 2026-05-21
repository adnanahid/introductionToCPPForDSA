#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double value = 3.14159265;

    // Default behavior: 5 significant digits total
    cout << setprecision(5) << value << endl;

    // With fixed: 5 digits after the decimal point
    cout << fixed << setprecision(5) << value << endl;

    return 0;
}