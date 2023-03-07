#include <iostream>

using namespace std;

//тип_пов._знач назва (<тип_параметру назва_параметру,...>){
    //тіло функції
//}
//JetBrains
void PrintHelloWorld() {
    //PrintHello();
    cout << "Hello world!\n";
}
void PrintHello() {
    //PrintHelloWorld();
    cout << "Hello Function";
}
void Sum(int a, int b) {

    int res = a + b;
    cout << res << endl;
}
//Msg: <Text>
void PrintMsg(string a) {
    cout <<" Msg: "<< a << endl;
}
void Div(int a, int b) {
    if (b != 0) {
        int res1 = a / b;
        cout << res1 << endl;
    }
    else {
        cout << " Error";
    }
    
}
int main() {
    //PrintHelloWorld();
    //PrintHello();
    //cout << "Alg2";
    //Alg();
    //cout << "Alg2";
    //Alg();
    //cout << "Alg2";
    //Alg();
    //PrintHello();
    int q = 3, r = 5;
    Sum(3, 8);
    Sum(q, r);
    PrintMsg("Hello");
    Div(4, 2);
    Div(4, 0);
    return 0;
}