#include <iostream>
#include <utility>

using namespace std;

#define SIZE 9
int main() {
     
    //int matrix[3][3];
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cin >> matrix[i][j];
    //    }
    //}
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << matrix[i][j] << ' ';
    //    }
    //    cout << endl;
    //}


    /*int matrix[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j]<< "\t";
        }
        cout << endl;
    }*/

    int counter = 1;
    int matrix[SIZE][SIZE];
    /*for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = counter;
            counter++;
        }
    }*/
    /*for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = (i+1) * (j+1);
        }
    }*/
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
