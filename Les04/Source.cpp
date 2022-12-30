#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*//Дано три цілих числа. Знайдіть найбільше з них 
	//(програма повинна вивести одне ціле число). 
	//Під найбільшим у цій задачі розуміється число, яке не 
	//менше, ніж будь-яке інше.
	//1 2 3
	//3
	int a, b, c;
	cout << " Enter a nuber: ";
	cin >> a >> b >> c;
	/*if (a > b && a > c) {
		cout << a << endl;
	}
	else if (b > a && b > c) {
		cout << b << endl;
	}
	else {
		cout << c << endl;
	}* /
	cout << max(max(a, b), c);*/
	/*//Дано три натуральні числа A, B, C. Визначте, чи існує 
	//трикутник з такими сторонами. Якщо трикутник існує, 
	//виведіть рядок YES, інакше виведіть рядок NO.

	//3 4 5
	//YES
	int a, b, c;
	cout << "enter a number : ";
	cin >> a >> b >> c;
	if (a + b > c && b+c>a &&a+c>b) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}*/
	/*//Вводяться п'ять натуральних чисел. 
	//Напишіть програму, яка виводить суму лише непарних чисел.
	//2 4 3 5 7
	//15
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int sum = 0;
	if (a % 2 != 0) {
		sum += a;
	}
	else if (b % 2 != 0) {
		sum += b;
	}
	else if (c % 2 != 0) {
		sum += c;
	}
	else if (d % 2 != 0) {
		sum += d;
	}
	else if (e % 2 != 0) {
		sum += e;
	}
	cout << "Sum = " << sum;*/
	/*int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int sum = 1;


	if (a % 2 == 0) {
		sum *= a;
		}
	if (b % 2 == 0) {
		sum *= b;
	}
	if (c % 2 == 0) {
		sum *= c;
	}
	if (d % 2 == 0) {
		sum *= d;
	}
	if (e % 2 == 0) {
		sum *= e;
	}
	cout << "Sum = " << sum << endl;
	*/
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int counter = 0;
	if (a == 3 || a == 6) {
		counter+=1;
	}
	if (b == 3 || b == 6) {
		counter += 1;
	}
	if (c == 3 || c == 6) {
		counter += 1;
	}
	if (d == 3 || d == 6) {
		counter += 1;
	}
	cout << "Counter = " << counter;
	return 0;
}