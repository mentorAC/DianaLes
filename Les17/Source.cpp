
#include <iostream>
#include <ctime>
using namespace std;
int main(int argc, const char* argv[]) {
    /*//Напишіть програму, яка вводить спочатку послідовність 
    //індексів, а потім саму послідовність чисел. Необхідно, 
    //як і першому степу, вивести елементи послідовності із 
    //заданими індексами.
    //3
    //5 1 2
    //9
    //23 43 45 67 65 23 32 45 68

    //23 43 45
    int size,size1;
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin >> size1;
    int* arr1 = new int[size1];
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr1[arr[i]] << " ";
    }*/

    /*int row = 5;
    int col = 5;
    int** matrix = new int* [row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] <<"\t";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;*/

    //int a;
    //cout << sizeof(int) << endl;
    //cout << sizeof(double) << endl;
    //cout << sizeof(a) << endl;
    //cout << sizeof(int*) << endl;
    //cout << sizeof(double*) << endl;
    
    //На вход подаются число N -- количество строк и 
    //столбцов двумерной таблицы чисел. Далее в N 
    //строках вводится сама таблица. Вывести сумму 
    //чисел на главной диагонали.
    //4
    //1 2 3 4 
    //3 2 3 2 
    //1 2 1 2
    //1 0 0 0

    //4
 /*   int row;
    cin >> row;
    int** matrix = new int* [row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[row];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++) {
            cin >> matrix[i][j];
        }
    }

    int suma = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++) {
            if (i == j) {
                suma += matrix[i][j];
            }
        }
    }
    cout << suma << endl;
    
    for (int i = 0; i < row; i++) {
        delete[]matrix[i];
    }
    delete[] matrix;*/

    //malloc
    //int* arr = new int[10];
    int* arrMall = (int*)malloc(sizeof(int) * 10);
    free(arrMall);
    int a = 10;
    int* ptrA = &a;
    cout << *ptrA<<endl;
    void* ptr = ptrA;
    cout << *(double*)ptr;
    return 0;
}

