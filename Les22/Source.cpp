#include <iostream>
#include <string>
using namespace std;
int main() {
    /*string s;
    getline(cin, s, '#');
    cout << s;*/

    /*string str;
    getline(cin, str);
    int counter = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ' ') {
            counter++;
        }
    }
    cout << counter+1 << endl;*/
    
    string sMain = "abcadefag";
    string s = sMain;
    
    //s.resize(10, '@');
    //s.clear();
    //if (s == "")
    /*if (s.empty())
    {
        cout << "str is empty!";
    }*/

    /*s.push_back('!');
    s.push_back('!');
    s.push_back('!');*/
    //s.append("####");
    //s.append(4, '#');
    //s.append("hello world", 5, 6 );

    //s.erase(3);
    //s.erase(3, 2);

    //string sub = s.substr(3);
    /*string sub = s.substr(3, 2);
    cout << sub << endl;
    cout << s;*/

    //ABCDEFGH
    //EFGH ABCD
    /*string str;
    cin >> str;
    int sise = str.size();
    string sub = str.substr(sise / 2, sise);
    string sub2 = str.substr(0, sise / 2);

    cout << sub << " " << sub2 << endl;*/

    //int index = s.find("a",4 );
    ////s.find_first_of();
    //index = s.find_last_of("a");
    //if (index == string::npos) {
    //    cout << "NO exists(((";
    //}
    //cout << index;

    /*string s1 = "51";
    int num = atoi(s1.c_str());
    num++;
    cout << num;*/

    s.insert(3, "BBC");
    cout << s;

    return 0;
}
