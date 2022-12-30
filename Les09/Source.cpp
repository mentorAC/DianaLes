#include <iostream>
#include <ctime>

using namespace std;

int main1() {
   /* int a;
    cin >> a;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            cout << i << " ";
            break;
        }
    }*/

    //for (int i = 0; i < 10; i++)
    //{
    //    if (i == 7) {
    //        continue;
    //        //break;
    //    }
    //    cout << i << endl;
    //}
    
    //break;

    /*cout << "First" << endl;
    goto m1;
    cout << "Second" << endl;
m1:
    cout << "Third" << endl;


    for (int i = 0; i < 10; i++)
    {
        for (size_t J = 0; J < 15; J++)
        {
            if (i == 5) {
                goto m2;
            }

        }
    }
m2:*/

    /*int q = 0;
m1:
    cout << q++ << " ";

    if (q < 10) {
        goto m1;
    }*/


    //goto

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << rand()%100 << endl;
    }


	return 0;
}