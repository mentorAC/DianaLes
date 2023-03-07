#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
     
    while (true) {      //головний цикл програми
        cout <<         //виводимо меню на екран
            "Meniu\n"
            "[1] Coding\n"
            "[2] Uncoding\n"
            "[3] Quit\n";
        int code;       //отримуємо код обраного пункту меню
        cin >> code;
        if (code == 1) {    //якщо обрали кодування
            cout << "enter string for coding: ";    //запитуємо рядок
            string str;
            int number;
            cin >> str;
            cout << "enter bais for coding: ";      //запитуємо зміщення
            cin >> number;
            for (int i = 0; i < str.size(); i++) {  //кодуємо
                //cout <<char (str[i] + number);
                if (isalpha(str[i])) {//isnumber() //якщо символ є літрою
                    int counter_A_z = str[i] + number;  //88+3=91   //тоді додаємо зміщення
                    if (counter_A_z > 'z') {   //99>122 //91>122 NO    //перевіряємо, що якщо символ вийшов за межі алфавіту
                        int come_out_on_z = counter_A_z - 'z';
                        int add_to_the_beginning_a = come_out_on_z + 'a' - 1;
                        cout << char(add_to_the_beginning_a);
                        //рахуємо на скільки вийшов
                        //додаємо до початку алфавіту
                        //виводимо на екран
                    }
                    else  if (counter_A_z > 'Z' && counter_A_z < 'a') { //91>90 YES
                        int come_out_on_Z = counter_A_z - 'Z';
                        int add_to_the_beginning_A = come_out_on_Z + 'A' - 1;
                        cout << char(add_to_the_beginning_A);
                    }
                    else {
                        cout << char(counter_A_z);
                    }
                }
                else if (isdigit(str[i])) {
                    int counter1_9 = str[i] + number;
                    if (counter1_9 > '9') {
                        int come_out_on1_9 = counter1_9 - '9';
                        int add_to_the_beginning_1_9 = come_out_on1_9 + ('0' - 1);
                        cout << char(add_to_the_beginning_1_9);
                    }
                    else {
                        cout << char(counter1_9);
                    }
                }
            }
            cout << endl;
        }
        else if (code == 2) {
            cout << "Enter string for uncoding: ";
            string strUn;
            int number_un;
            cin >> strUn;
            cout << "Enter bais for uncoding: ";
            cin >> number_un;
            for (int i = 0; i < strUn.size(); i++) {
                if (isalpha(strUn[i])) {
                    int counter_un_A_z = strUn[i] - number_un;//97-4=93,65-4=61
                    if (counter_un_A_z < 'a' && counter_un_A_z >'Z') {// 93<97,61<97,61>91
                        int come_out_on_un_az = 'a' - counter_un_A_z; // 97-93 =4
                        int add_to_the_end_un_az = (1 + 'z') - come_out_on_un_az;//123 - 4= 119
                        cout << char(add_to_the_end_un_az);
                    }
                    else if (counter_un_A_z < 'A') {// 61<65
                        int come_out_on_un_AZ = 'A' - counter_un_A_z;
                        int add_to_the_end_un_AZ = (1 + 'Z') - come_out_on_un_AZ;
                        cout << char(add_to_the_end_un_AZ);
                    }
                    else {
                        cout << char(counter_un_A_z);
                    }
                }
                else if (isdigit(strUn[i])) {
                    int counter_un_0_9 = strUn[i] - number_un; // 48-4=44
                    if (counter_un_0_9 < '0') {//44<48
                        int come_out_on_un_09 = '0' - counter_un_0_9;//48-44=4
                        int add_to_the_un_09 = (1 + '9') - come_out_on_un_09;//57-4=53 ~ 5 
                        cout << char(add_to_the_un_09);//6
                    }
                    else {
                        cout << char(counter_un_0_9);
                    }
                }
            }
            cout << endl;
        }
        else if (code == 3) {
            break;
        }

    }

    return 0;
}

//snake_case
//camelCase
//PascaleCase



//abc 3
//a b c d e f g ..
//def

//xyz 3
//abc