#include "header.h"
#include <iostream>
using namespace std;

void insertAtEnd(int*& arr, int& size, int value) {
    int* temp = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        temp[i] = arr[i];
    }
    temp[size] = value;
    delete[] arr;
    arr = temp;
    ++size;
}

void deleteAtPosition(int*& arr, int& size, int position) {
    if (position < 1 || position > size) {
        cout << "Invalid position: " << position << '\n';
        return;
    }
    int* temp = nullptr;
    if (size > 1) {
        temp = new int[size - 1];
        for (int i = 0, j = 0; i < size; ++i) {
            if (i == position - 1) {
                continue;
            }
            temp[j++] = arr[i];
        }
    }
    delete[] arr;
    arr = temp;
    --size;
}

void displayArray(int* arr, int size) {
    if (size == 0) {
        cout << "Array is empty\n";
        return;
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << (i + 1 == size ? '\n' : ' ');
    }
}

void runProgram() {
    int* arr = nullptr;
    int size = 0;

    insertAtEnd(arr, size, 10);
    insertAtEnd(arr, size, 20);
    insertAtEnd(arr, size, 30);
    insertAtEnd(arr, size, 40);
    insertAtEnd(arr, size, 50);
    displayArray(arr, size);

    deleteAtPosition(arr, size, 3);
    displayArray(arr, size);

    deleteAtPosition(arr, size, 1);
    displayArray(arr, size);

    deleteAtPosition(arr, size, 10);
    displayArray(arr, size);

    delete[] arr;
}
