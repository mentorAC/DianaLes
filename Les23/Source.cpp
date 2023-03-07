#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    /* string str;
     cin >> str;
     int sice = str.size();
     int bracket = str.find("(");
     int bracket1 = str.find(")");

     string sub = str.substr(bracket1, sice);
     int si_bracket1 = sub.size();
     string sub1 = str.substr(0, bracket + 1);
     int si_bracket = sub1.size();
     string sub2 = str.substr((bracket + 1), (sice - (si_bracket + si_bracket1)));

     cout << sub2 << endl;*/
     /*string str;
      cin >> str;
      //ABCDEFGH
      //HGFEDCBA

      //ABCDEFGH
      //HGFEDCBA
      for (int i = 0; i < str.size()/2; i++) {
          //str[i]
          //str[str.size()-1-i]
          / *char s = str[i];
          str[i] = str[str.size() - 1 - i];
          str[str.size() - 1 - i] = s;* /
          swap(str[i], str[str.size() - 1 - i]);
      }

      /*string str1;

      for (int i = str.size(); i > -1; i--) {
           str1.push_back(str[i]);
      }
      str = str1;* /
      cout<< str << endl;*/
   
    /*string str = "Hello";
    str.replace(2, 2, "ww");
    cout << str;

    //aabbaaaaabbabbaab
    //bbaabbbbbaabaabba
    string str1;
    cin >> str1;
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] == 'a') {
            str1[i] = 'b';
        }
        if (str1[i] == 'b') {
            str1[i] = 'a';
        }
    }
    cout << str1 << endl;*/
    //abacaba
    //a
    //ab
    //aba
    //abac
    //abaca
    //abacab
    //abacaba

    /*string str,str1;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        cout << str.substr(0, i+1) << endl;
    }*/

    string s ="bahiwiweayq";
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    int arr[10]{ 4,3,2,6,1,8,9,10 };
    sort(arr, arr+10);
    //cout << s;
}