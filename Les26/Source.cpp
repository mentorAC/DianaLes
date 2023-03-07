#include <iostream>
#include <cmath>
#include <string>

using namespace std;
//void OperationOnNumber(int a, int b) {
//    int sum = a + b;
//    int multi = a * b;
//    if (b != 0) {
//        int divi = a / b;
//        cout << "Division = " << divi << endl;
//    }
//    int sub = a - b;
//    cout << "Sum = " << sum << endl << "Multiplication = " << multi << endl << "Subtraction = " << sub << endl;
//}
//void Module(int a) {
//    int version1 = sqrt(pow(a, 2));
//    cout << "Module 1 = " << version1 << endl;
//    int version2 = abs(a);
//    cout << "Module 2 = " << version2 << endl;
//    int version3 = fabs(a);
//    cout << "Module 3 = " << version3 << endl;
//    if (a > 0) {
//        cout << "Module 4 = " << a << endl;
//    }
//    else if (a < 0) {
//        cout << "Module 4 = " << -a << endl;
//    }
//
//    //////
//    int res = max(a, -a);
//}
//void DayMonthYear( int day,int month, int year) {
//
//    int d = day / 10;
//    int m = month / 10;
//    if ((d == 0) && (m == 0)) {
//        cout << "0" << day << ".0" << month << "." << year << endl;
//    }
//    else if (d == 0 && m != 0) {
//        cout << "0" << day << "." << month << "." << year << endl;
//    }
//    else if (d != 0 && m == 0) {
//        cout << day << ".0" << month << "." << year << endl;
//    }
//    else if (d != 0 && m != 0) {
//        cout << day << "." << month << "." << year << endl;
//    }
//}
int Module(int a) {
    return sqrt(pow(a, 2));
}
void NoGetTen() {

    return;
    10;
}
double GetOnePointOne() {
    return 1.1;
}
string GetString() {
    return "Hello world";
}
int GetTen() {
    cout << "start\n";
    return 10;
    cout << "End\n";
}

void Inc(int value) {
    value++;
}
void IncRef(int& value) {
    value++;
}
void IncPtr(int* value) {
    (*value)++;
}
void SetChar(char& ch) {
    ch = 10;
}
void PrintChar(char ch) {
    cout << ch;
}

void PrintMsg(const string& str) {
    cout << str;
    //str = "asd";
}

int main(int argc, const char* argv[]) {
   /* OperationOnNumber(8, 2);
    Module(-5);
    int day, month, year;
    cin >> day >> month >> year;
    DayMonthYear(day, month, year);*/
   //int b = NoGetTen();
    //double c = GetOnePointOne();
    //string s = GetString();
    //int a = GetTen();
    /*int a = 0;
    cout << "Value\n";
    cout << a << endl;
    Inc(a);
    cout << a << endl;
    cout << "Ref\n";
    cout << a << endl;
    IncRef(a);
    cout << a << endl;
    cout << "Ptr\n";
    cout << a << endl;
    IncPtr(&a);
    cout << a << endl;*/

    PrintMsg("qwerty");
    return 0;
}
