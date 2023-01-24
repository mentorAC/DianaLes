#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	//char str[10]{ 'h', 'e', 'l', 'l', 'o' };
	//char str1[20]{ "hello world" };
	//char str2[10] = "hello";
	//int arr[5]{ 1,4,2,6, 8 };
	////cout << arr << endl;
	//cout << str1;

    /*char a;
	cin >> a;
	if((a>='A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}*/

	//cout << (int)12.3456;
	/*int cod;
	cin >> cod;
	cout << (char)cod << endl;*/

	/*for (int i = 0; i <= 255; i++) {
		cout << (char)i;
	}*/
	//setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char word[15];
	cin >> word;
	cout << word;

	//cout << "Слава Україні!";
	//cout << "Слава Україні!";
	//1 //utf-8
	//2 //utf-16
	//3
	//4 
	return 0;
}