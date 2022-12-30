#include <iostream>

using namespace std;

int main() {

	//const int size = 15;
	//int matrix[size][size];
	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size; j++) {
	//		matrix[i][j] = 0;
	//	}
	//}
	//for (int i = 0; i < size; i++) {
	//	for(int j=0;j<size;j++){
	//		if (i == 0 || j == 0 || (size-1)==i||(size-1)==j) {
	//			matrix[i][j] = 1;
	//		}
	//		//if (i == j||i+j==(size-1)) {
	//		//	matrix[i][j] = 1;
	//		//}
	//		if ((i >= j )&&(i+j<=size-1)){
	//		//if (i+j <=size-1 ) {
	//			matrix[i][j] = 1;
	//		}
	//	}
	//}
	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size; j++) {
	//		cout<<((matrix[i][j] == 0)? " ":"*");
	//	}
	//	cout << endl;
	//}

	//int size;
	//cin >> size;
	//int arr[size];
	//new int[5];

	int a = 10;
	int b = 12;
	cout << "Value\taddress\n";
	cout << a << "\t" << &a << endl;
	cout << b << "\t" << &b;
	return 0;
}

//bin -> 0 1
//oct -> 0 1 2 3 4 5 6 7
//dec -> 0 1 2 3 4 5 6 7 8 9
//hex -> 0 1 2 3 4 5 6 7 8 9 A B C D E F