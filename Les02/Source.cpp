#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*int n, a = 1;
    cout << "enter a six-digit number ";


    cin >> n;
    while (n != 0)
    {
        a = a * (n % 10);
        n = n / 10;
    }
    cout << "Reversed Number: " << a << endl;*/
    /*
    //123
    //1 2 3

    //584
    //5 8 4
    int a,a1,a2,a3;
    cout << " enter a number :";
    cin >> a;
    //123 / 100 = 1 //first
    //123 / 10 % 10 = 2 //second
    //123 % 10 = 3  //third
    a1 = a / 100;
    a2 = a / 10 % 10;
    a3 = a % 10;
    cout << a1 << " " << a2 << " " << a3 << endl;
    */
    /*int a, b, c;
    cout << "enter a number: ";
    cin >> a >> b >> c;
    int a1 = a / 10;
    int a2 = a % 10;
    int b1 = b / 10;
    int b2 = b % 10;
    int c1 = c / 10;
    int c2 = c % 10;
    cout << a2 * 10 + a1 << " " << b2 * 10 + b1 << " " << c2 * 10 + c1 << endl;
    //a2 -> 2
    //a1 -> 1
    //a2*10 + a1
    
    */
    /*
    //cout << "Sqrt(4) = " << sqrt(4) << endl;
    //cout << "Pow(3, 2) = " << pow(3, 2) << endl; 
    //cout << "Pow(8, 1/3) = " << pow(8, 1 / 3.0) << endl;
    //
    //cout << "Abs(-4) = " << abs(-4) << endl;
    //cout << "Abs(4) = " << abs(4) << endl;

    //sin(123);
    //cos(12);
    //tan(123);
    //exp(52);
    //ctan -> 1/tan(12) => cos(12)/sin(12);



    /*cout << 5 / 2 << endl << 
            5 / 2.0 << endl;* /*/

    /*int r;
    double s;
    cout << "enter a R: ";
    cin >> r;
    s = r * r * 3.14;
    cout << "S :" << s << endl;*/

    int a, b, c;
    cout << "enter a numbers: ";
    cin >> a >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << " C =" << c << endl;
    cout << "C = " << hypot(a, b);
    return 0;
}