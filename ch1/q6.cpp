#include <iostream>
#define ARR_SIZE 3

using std::cout;
using std::cin;
using std::endl;

void populate_array(int arr[][ARR_SIZE], int size);
void print_array(int arr[][ARR_SIZE], int size);

int main (void) {
    int arr[ARR_SIZE][ARR_SIZE];
    int max = ARR_SIZE - 1;
    int min = 0;

    populate_array(arr, ARR_SIZE);
    cout << "The original array is " << endl;
    print_array(arr, ARR_SIZE);

    while (max > min) {
        int temp, i;
        for (i = min; i < max; i++) {
            temp = arr[min][i];
            arr[min][i] = arr[max-i][min];
            arr[max-i][min] = arr[max][max-i];
            arr[max][max-i] = arr[i][max];
            arr[i][max] = temp;
        }
        max--;
        min++;
    }

    cout << "The transformed array is " << endl;
    print_array(arr, ARR_SIZE);

    return 0;
}

void populate_array(int arr[][ARR_SIZE], int size) {
    int row, col;
    int count = 0;
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            arr[row][col] = count++;
        }
    }
}

void print_array(int arr[][ARR_SIZE], int size) {
    int row, col;
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
