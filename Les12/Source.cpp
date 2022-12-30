#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    //int arr[10];
    //for (int i = 0; i < 10; i++) {
    //   arr[i] = rand()%100;
    //}
    //for (int i = 0; i < 10; i++) {
    //    cout << arr[i] << " ";
    //}
    ////3 2 11 6 1 5 9
    //int min=INT32_MAX;
    //for (int i = 0; i < 10; i++) {
    //    if (arr[i] < min) {
    //        min = arr[i];
    //    }
    //}
    //
    //int max = INT32_MIN;
    //for (int i = 0; i < 10; i++) {
    //    if (arr[i] > max) {
    //        max = arr[i];
    //    }
    //}
    //cout << endl << min;
    //cout << endl << max;
    //for (int i=0;i<10)
    const int a = 10;
    int arr[a];
    
    for (int i = 0; i < a; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < a; i++) {
        cout << arr[i] <<" ";
    }
    int min = INT32_MIN;
    int min_i;
    for (int i = 0; i < a; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_i = i;
        }
    }
    swap(arr[0], arr[min_i]);
    /*int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    int a = sum / 10;
    int counter = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > a) {
            counter++;
        }
    }
    cout <<endl<< counter << endl;*/
    return 0;
}
