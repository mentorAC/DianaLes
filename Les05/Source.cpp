#include <iostream>
#include <string>

using namespace std;


int main() {
    /*int a, b, c;
    cin >> a >> b >> c;

    cout << (a == b) + (b == c) + (a == c);

    /*if (a == b && b == c) {
        cout << " 3 " << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << " 2 " << endl;
    }
    else {
        cout << " 0 " << endl;
    }*/
    /*
    //++

    //int a = 0;
    //a += 1;
    //a++;
    ////(a++);
    ////cout << a++ << endl;
    ////cout << ++a << endl;
    //cout << 3 + ++a << endl;
    //cout << a;
    */

    /*int a = 5;
    if (a < 10) {
        cout << "Yes" << endl;
    }
    if (1 < a && a < 7) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No";
    }*/

    /*
    //&& ||
    //+1 -1
    //int a = 4;
    //3 + 2;

    /*if (a % 2 == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }* /

    //?:
    //(умову)? значення1 : значення2;

    //string s = (a % 2 == 0) ? "Yes" : "No";
    //cout << ((a % 2 == 0) ? "Yes" : "No") << endl;

    //int a, b;
    //cin >> a >> b;
    //cout << (a > b ? a : b) << endl;
    //cout << (a < b ? a : b) << endl;
    */

    //switch
    int a = 2;
    
    switch (a) {
    case 1:
        //code
        cout << "One\n";
        break;
    case 2:
        cout << "Two\n";
        //cade..
        //break;
    case 3:
        cout << "Three\n";
        //code..
        break;
    default:
        cout << "I don`t know this number!";
        break;
    }
    return 0;
}