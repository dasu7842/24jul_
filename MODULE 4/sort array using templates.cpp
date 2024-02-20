// Write a program of to sort the array using templates in c++


#include <iostream>
using namespace std;  //library file

//function
template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//function
template <class T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()  //main function
{
    // Arrays of different types
    int intArr[] = {5, 2, 9, 1, 3};
    double doubleArr[] = {3.5, 2.2, 1.1, 5.5, 4.4};
    char charArr[] = {'c', 'b', 'a', 'e', 'd'};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    // Displaying arrays before sorting
    cout << "Before sorting:" << endl;
    cout << "Integer array: ";
    printArray(intArr, intSize);
    cout << "Double array: ";
    printArray(doubleArr, doubleSize);
    cout << "Character array: ";
    printArray(charArr, charSize);

    bubbleSort(intArr, intSize);
    bubbleSort(doubleArr, doubleSize);
    bubbleSort(charArr, charSize);

    cout << "\nAfter sorting:" << endl;
    cout << "Integer array: ";
    printArray(intArr, intSize);
    cout << "Double array: ";
    printArray(doubleArr, doubleSize);
    cout << "Character array: ";
    printArray(charArr, charSize);

    return 0;
}

