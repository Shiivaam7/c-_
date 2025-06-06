#include <iostream>
using namespace std;

int main() {
    int array[] = {1, 4, 9, 5, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "size of array: " << size << endl;

    // Bubble sort (ascending order)
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
