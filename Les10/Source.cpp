#include <iostream>
#include <ctime>
using namespace std;

int main() {

    /*srand(time(NULL));
    //srand(static_cast<unsigned int>(time(NULL)));
    int numberaRandomElements;
    cin >> numberaRandomElements;
    int min;
    int max;
        cin >> min;
        cin >> max;
    for (int i = 0; i < numberaRandomElements; i++) {
        cout << min + rand() % (max-min) << endl;

    }*/

    //int a = 3;
    //a = 5;

    //int arr[5]{0};
    /*arr[0] = 3;
    arr[1] = 7;
    arr[2] = 2;
    arr[3] = 5;
    arr[4] = 1;*/
    /*cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;*/

    /*for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }*/
    

    //Виведіть усі елементи масиву з парними індексами 
    //(тобто A[0], A[2], A[4], ...).
    int a[5];

    //cout << a;

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            cout << a[i] << " ";
        }
    }

	return 0;
}