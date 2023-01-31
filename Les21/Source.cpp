#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <string.h>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
    /*char str[20];
    cin >> str;
    int len = strlen(str);
    int counter = 0;
    int counter1 = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            counter++;
        }
        if (str[i] >= 'A' && str[i] <= 'Z') {
            counter1++;
        }
    }
    int maxi = max(counter, counter1);
    int main = min(counter, counter1);
    cout << maxi - main << endl; 

    cout << abs(counter - counter1);*/

    /*char str[20];
    cin >> str;
    int len = strlen(str);
    for (int i = 0; i < len-1; i += 2) {
        cout << str[i] << str[i + 1] << " ";
    }*/

    /*char str1[]{ "hello" };
    char str2[]{ "hello1" };

    char text[255];*/

    /*//strcmp
    //1 -> str1 > str2
    //-1 -> str1 < str2
    //0 -> str1 == str2
    if (strcmp(str1, str2) == 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }*/
    //strcpy
    /*strcpy(text, str1);
    cout << text;*/

    //sprintf
    /*//char tamplate[]{"Hi, ...! I know that you are ...!"};
    const char* tamplate = "Hi, %s! I know that you are %d!";
    //%s - string
    //%d - int
    //%f - float
    //%lf - double
    sprintf(text, tamplate, "Tom", 20);
    cout << text;*/

    //string s;
    //s = "hello string! - ";

    ////cout << s << endl;

    //string s1 = "other string";
    ////cout << s + s1 << endl;
    //string str1 = s + s1;

    //string str2(s1);
    //string str3(10, '@');
    //cout << str3;


    /*//ABBABAAABA
    //A>B

    //BBBBABBBAB
    //A<B

    //ABABABABAB
    //A=B
    string str;
    cin >> str;

    int counterB = 0;
    int counterA = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'B') {
            counterB++;
        }
        else if (str[i] == 'A') {
            counterA++;
        }
    }
    if (counterB > counterA) {
        cout << "B>A" << endl;
    }
    else if (counterB < counterA) {
        cout << "B<A" << endl;
    }
    else {
        cout << "B=A" << endl;
    }*/

    //ARNOC
    //BSOPD
string str;
cin >> str;
for (int i = 0; i < str.size(); i++) {
     str[i] += 1;
}
cout << str;
	return 0;
}