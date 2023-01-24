
#include <iostream>

using namespace std;

int main() {
    /*char a;
    cin >> a;

    if (a >= 'A' && a <= 'Z') {
        int c = a + ' ';
        cout << (char)a << endl;
    }
    else if (a >= 'a' && a <= 'z') {
        int x = a - ' ';
        cout << (char)x << endl;
    }*/

    /*char str[255];
    cin >> str;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        cout << str[i] << endl;
    }*/

    /*//5
    //abcde
    //3
    //abc
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
      cout <<  (char)(i + 'a');
    }*/
    /*int a;
    char str1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str2[]{ "hello" };
    char str3[] = "hello";

    int len = strlen(str2);

    cout << str1;*/

    /*//Ivanova Elena Sergeevna
    //Ivanova E.S.

    char str[20];
    char str2[20];
    char str3[20];
    cin >> str >> str2 >> str3;
    cout << str << " " << str2[0] << ". " << str3[0] << ". ";*/
    
    /*//abcdefghijk
    //ak
    char str[20];
    cin >> str;
    int len = strlen(str);
    cout << str[0] << str[len - 1];*/

    //Hanna Kovalchuk
    //Kovalchuk Hanna
    char str[20];
    char str1[20];
    cin >> str >> str1;
    int len = strlen(str);
    int len1 = strlen(str1);
    if (len > len1) {
        cout << str << " " << str1;
    }
    else {
        cout << str1 << " " << str;
    }
}