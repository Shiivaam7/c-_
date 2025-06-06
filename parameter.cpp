#include <iostream>
using namespace std;
void selectionsort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
}
void printelement(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {1, 4, 9, 5, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Size of array: " << size << endl;

    printelement(array, size);
    selectionsort(array, size);
    printelement(array, size);
}

