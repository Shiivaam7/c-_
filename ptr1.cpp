#include<iostream>
using namespace std;
int main(){
    int* ptr_first = new int[5]{1, 2, 3, 0, 0}; 

    int choose;
    cout << "enter 1 to print first element, 2 to print second element:";
    cin >> choose;
    if (choose != 1) {
        for (int i = 0; i < 3; i++) {
            cout << "The values:" << *(ptr_first + i) << endl;
        }
        exit(1);
    }

    int* ptr_new = new int[8];
    for (int i = 0; i < 5; i++) {
        ptr_new[i] = ptr_first[i];
    }
    ptr_new[3] =4;
    ptr_new[4] = 5;
    ptr_new[5] = 6;
    ptr_new[6] = 7;
    ptr_new[7] = 8;

    delete[] ptr_first; 
    ptr_first = ptr_new;

    for (int i = 0; i < 8; i++) {
        cout << *(ptr_first + i) << endl;
    }

    delete[] ptr_first; 
    return 0;
}
