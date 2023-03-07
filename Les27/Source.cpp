#include <iostream>

using namespace std;

void Print(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Fill(int* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = 10 + rand() % 40;
    }
}
int Max(int* arr, int size) {
    int max = -999999999;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int Min(int* arr, int size) {
    int min = 9999999999;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int Find(int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

void PrintStaticMatrix(int matrix[][20], int col, int row) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}
void PrintDynamicMatrix(int** matrix, int col, int row) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}
int main() {
    /*int arr[5]{ 2,1,3,5,4 };
    Print(arr, 5);
    int arr1[10]{ 10,9,8,7,6,5,4,3,2,1 };
    Print(arr1, 10);
    int arr2[3]{ 4,5,6 };
    Print(arr2, 3);*/
    /*cout << " How many elements? ";
    int size;
    cin >> size;
    int* arr = new int[size];
    Fill(arr, size);
    Print(arr, size);
    int max = Max(arr, size);
    int min = Min(arr, size);
    cout << max << endl << min<<endl;*/
  /*  int size;
    cin >> size;
    int* arr = new int[size];
    Fill(arr, size);
    Print(arr, size);
    int max = Max(arr, size);
    int number = Find(arr, size,max);
    swap(arr[0], arr[number]);
    Print(arr, size);*/
    int size;
    cin >> size;
    int* arr = new int[size];
    Fill(arr, size);
    Print(arr, size);
    int max = Max(arr, size);
    int min = Min(arr, size);
    int numbermin = Find(arr, size, min);
    int numbermax = Find(arr, size, max);
    swap(arr[numbermax], arr[numbermin]);
    Print(arr, size);
    return 0;
}