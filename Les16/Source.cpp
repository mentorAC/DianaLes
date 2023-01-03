#include <iostream>

using namespace std;

int main() {

	/*int a = 10;
	int b = 12;
	cout << "Value\taddress\n";
	cout << a << "\t" << &a << endl;
	cout << b << "\t" << &b << endl;

	int color = 0xFFFFF;
	int* ptr = &a;

	cout << ptr;

	double c = 1.2;
	double* pc = &c;*/

	int arr1[]{ 5,4,3,2 };
	//int* ptr = &arr[0];

	int size;
	cin >> size;//10

	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	//cout << &arr[0] << " " << &arr[1] << " " << &arr[2] <<  " " << &arr[3] <<"\n";
	//cout << ptr << " " << ptr + 1 << " " << ptr + 2 << " " << ptr + 3 << "\n";
	//cout << arr << " " << arr + 1 << " " << arr + 2 << " " << arr + 3 << "\n";
	//cout << *ptr << endl;
	//cout << *(arr+0) << " " << *(arr + 1) << " " << *(arr + 2) << " " << *(arr + 3) << "\n";
	//cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << " " << ptr[3] << "\n";

	return 0;
}

//bin -> 0 1
//oct -> 0 1 2 3 4 5 6 7
//dec -> 0 1 2 3 4 5 6 7 8 9
//hex -> 0 1 2 3 4 5 6 7 8 9 A B C D E F