#include <iostream>
using namespace std;
void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
void displayArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size];  

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "Original array: ";
    displayArray(arr, size);

    bubbleSort(arr, size);

    cout << "Sorted array in ascending order: ";
    displayArray(arr, size);

    delete[] arr;  
    return 0;
}
