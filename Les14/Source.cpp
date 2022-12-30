#include <iostream>
using namespace std;
int main(int argc, const char* argv[]) {
    /*int matrix [4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cin >> matrix [i][j];
        }

    }
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cout << matrix [i][j]<< "\t";
        }
        cout << endl;
    }
    cout << endl;
     for (int i=4-1;i>=0;i--){
        for (int j=4-1;j>=0;j--){
            cout << matrix [i][j]<< "\t";
        }
        cout<< endl;
    }
    */
    /*int matrix[4][4];
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j]= rand()%100;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum+= matrix[i][j];
        }
        cout << sum << ' ';
        sum = 0;
    }
    cout << endl;*/

    //1 2 3
    //4 5 6
    //7 8 9

    //1 4 7
    //2 5 8
    //3 6 9

    /*int matrix[3][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[j][i] << "\t";
        }
        cout << endl;
    }*/
    /*int matrix[4][4];
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }*/

    /*int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum += matrix[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }*/
    //int sum = 0;
    //for (int i = 0; i < 4; i++) {
    //    //for (int j = 0; j < 4; j++) {
    //        //if (i == j) {
    //            sum += matrix[i][i];
    //        //}
    //    //}
    //}
    //cout << sum << endl;

    /*int max = -9999999;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        cout << max << endl;
        max = -99999999;
    }*/


    const int size = 7;
    int matrix[size][size]{};
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0) {
                matrix[i][j] = 1;
            }
            if ((size - 1) == i) {
                matrix[i][j] = 1;
            }
            if (j == 0) {
                matrix[i][j] = 1;
            }
            if ((size - 1) == j) {
                matrix[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << (matrix[i][j] == 0? " ":"*");
        }
        cout << endl;
    }
    return 0;
}