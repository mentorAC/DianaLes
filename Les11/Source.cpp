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

    /*//���� ����� �����.������� �� �������� ������, 
    //�� ����� �� ��������� ������� .
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

    /*//���� ����� ����� �����. ���� � ����� � ��� ����� 
    //�������� ������ �����, ������� �� �����. ���� 
    //������ �������� ������ ����� ���� � �� �������� 
    //�����. ���� ����� ��� ����� ����� � ������� �����
    //����.
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

    //���������� ����� �������� ������ (A[0] � A[1], A[2] 
    //� A[3] � �.�.). ���� �������� ������� �����, 
    //�� ������� ������� ���������� �� ����� ����.
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