#include <iostream>

using namespace std;

int main() {
	/*//1 5 5 4 4 4

	//0 0 0 0 0 0

	//1 2 2 3 3 3
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	int* arr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = 0;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] == arr[j]) {
				arr1[i]++;
			}
		}
	}
	cout << "\n";
	for (int i = 0; i < size; i++) {
		if (arr1[i] == 1) {
			cout << arr[i] << " ";
		}
	}

	delete[] arr;
	delete[] arr1;*/

	/*// 10 3
	// 8 10
	// 2 5
	// 3 6
	//I.....I...
	int n,k;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = 1;
	}
	for (int i = 0; i < k; i++) {
		int k1, k2;
		cin >> k1 >> k2;
		for (int i = k1-1; i < k2; i++) {
			arr[i] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			cout << "I";
		}
		else {
			cout << ".";
		}
	}*/

	//10 
	//2 7 4 3 6 5 4 3 1 2
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < size-1; i++) {
		if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1])) {
			cout << arr[i]<< " ";
		}
	}

	return 0;
}