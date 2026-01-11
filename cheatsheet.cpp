//THIS IS THE CHEATSHEET BY CODE WITH HARRY FOR C++ PROGRAMMING LANGUAGE


//>> BASIC DATATTYPES IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     float b = 3.14;
//     char c = 'A';
//     bool d = true;

//     cout << a << endl;
//     cout << b << endl;
//     cout << c << endl;
//     cout << d << endl;

//     return 0;
// }

//>> INPUT AND OUTPUT IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "You entered: " << num;
//     return 0;
// }

//>> OPERATORS IN C++
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    return 0;
}

>> IF- ELSE IN C++
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "Adult";
    } else {
        cout << "Minor";
    }

    return 0;
}

//>> IF-ELSE IF-ELSE IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
//     cin >> marks;

//     if (marks >= 90)
//         cout << "A";
//     else if (marks >= 75)
//         cout << "B";
//     else
//         cout << "C";

//     return 0;
// }

//>> SWITCH CASE IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     int day;
//     cin >> day;

//     switch(day) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         default:
//             cout << "Invalid";
//     }

//     return 0;
// }

//>> FOR LOOP IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     for(int i = 1; i <= 5; i++) {
//         cout << i << endl;
//     }
//     return 0;
// }

//>> WHILE LOOP IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     while(i <= 5) {
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

//>> DO-WHILE LOOP IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     do {
//         cout << i << endl;
//         i++;
//     } while(i <= 5);

//     return 0;
// }

//>> BREAK AND CONTINUE IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     for(int i = 1; i <= 5; i++) {
//         if(i == 3)
//             continue;
//         cout << i << endl;
//     }
//     return 0;
// }

//>> FUNCTIONS IN C++
// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello";
// }

// int main() {
//     greet();
//     return 0;
// }

//>> FUNCTIONS WITH PARAMETERS IN C++
// #include <iostream>
// using namespace std;

// int sum(int a, int b) {
//     return a + b;
// }

// int main() {
//     cout << sum(3, 4);
//     return 0;
// }

//>> ARRAYS IN C++
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << endl;
//     }
//     return 0;
// }

//>> POINTERS IN C++#include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int* p = &a;

//     cout << a << endl;
//     cout << &a << endl;
//     cout << p << endl;
//     cout << *p << endl;

//     return 0;
// }

//>> STRUCTURES IN C++
// #include <iostream>
// using namespace std;

// struct Student {
//     int roll;
//     char grade;
// };

// int main() {
//     Student s1;
//     s1.roll = 1;
//     s1.grade = 'A';

//     cout << s1.roll << endl;
//     cout << s1.grade << endl;

//     return 0;
// }

//>> CLASSES AND OBJECTS IN C++
// #include <iostream>
// using namespace std;

// class Employee {
// public:
//     int id;
//     void show() {
//         cout << id;
// //     }
// };

// int main() {
//     Employee e1;
//     e1.id = 101;
//     e1.show();
//     return 0;
// }

//>> CONSTRUCTORS IN C++
// #include <iostream>
// using namespace std;

// class Test {
// public:
//     Test() {
//         cout << "Constructor called";
//     }
// };

// int main() {
//     Test t;
//     return 0;
// }

//>> DESTRUCTORS IN C++
// #include <iostream>
// using namespace std;

// class Test {
// public:
//     ~Test() {
//         cout << "Destructor called";
//     }
// };

// int main() {
//     Test t;
//     return 0;
// }
