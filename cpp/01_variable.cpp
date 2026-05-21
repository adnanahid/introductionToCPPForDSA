//* C++ Variables
//* Variables are containers for storing data values.

//* int - stores integers (whole numbers), without decimals, such as 123 or -123
//* double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//* char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//* string - stores text, such as "Hello World". String values are surrounded by double quotes
//* bool - stores values with two states: true or false

//! Integer Data Types in C++
// short 2 bytes. Range: −32,768 to 32,767
// int 4 bytes. Range: -2,147,483,648 to 2,147,483,647
// long long 8 bytes. Range: −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// Note: All four types also have unsigned variants (unsigned int, unsigned long long, etc.) that drop negative values and double the positive range.

// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     cout << x;
//     return 0;
// }

//! Floating-point types
// float size 4 bytes. percision 6/7 digits
// double size 8 bytes. percision  15/16 digits
// long double 8–16 bytes. percison 18/19 digits (side chick)

// #include <iostream>
// using namespace std;

// int main() {
//     float x;
//     cin >> x;
//     cout << x;
//     return 0;
// }

//! Character type
// syntax: char, size 1 byte, ;

// #include <iostream>
// using namespace std;

// int main() {
//     char x;
//     cin >> x;
//     cout << x;
//     return 0;
// }

//! String type
// syntax: string, size: It grows dynamically based on system's available memory.
// note: is not a primitive type in C++. It's a class from the Standard Library.

// #include <iostream>
// #include <string> // So you need to include a header to use this header file.
// using namespace std;

// int main() {
//     string x;
//     cin >> x;
//     cout << x;
//     return 0;
// }

//! Boolean type
// syntax: bool. store only true or false;

// #include <iostream>
// using namespace std;

// int main() {
//     bool x = true;
//     x ? cout << "true" : cout << "false";
//     return 0;
// }