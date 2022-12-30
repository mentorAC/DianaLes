#include <iostream>
using namespace std;
int main(int argc, const char* argv[]) {
    /*int a;
    cin >> a;
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            counter++;
        }
    }
    cout << counter;*/

    /*//ƒано масив чисел.¬ивед≥ть вс≥ елементи масиву, 
    //€к≥ б≥льш≥ за попередн≥й елемент .
    //1 5 2 4 3
    //5 4
    int n = 5;
    int arr[5];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        if (arr[i] < arr[i - 1]) {
            cout << arr[i + 1] << ' ';
        }
    }*/

    /*//ƒано масив ц≥лих чисел. якщо в ньому Ї два сус≥дн≥ 
    //елементи одного знака, вивед≥ть ц≥ цифри. якщо 
    //сус≥дн≥х елемент≥в одного знака немаЇ Ц не виводьте 
    //н≥чого. якщо таких пар сус≥д≥в к≥лька Ц вивед≥ть першу
    //пару.
    //-1 2 3 -1 -2
    // 2 3
    int arr[5];
    int n = 5;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        if ((arr[i] > 0 && arr[i + 1] > 0) ||
            (arr[i] < 0 && arr[i + 1]<0)) {
            cout << arr[i] << " " << arr[i + 1];
            break;
        }
    }*/

    //ѕереставте сус≥дн≥ елементи масиву (A[0] з A[1], A[2] 
    //з A[3] ≥ т.д.). якщо елемент≥в непарне число, 
    //то останн≥й елемент залишаЇтьс€ на своЇму м≥сц≥.
    //1 2 3 4 5
    //2 1 4 3 5

    int arr[5];
    int n = 5;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i+=2) {
        /*int c = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = c;*/
        swap(arr[i], arr[i+1]);
        
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}