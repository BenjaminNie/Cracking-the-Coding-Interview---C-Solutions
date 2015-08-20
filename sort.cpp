#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& array);
vector<int> insertionSort(vector<int>& array);

int main (void) {
    int vv[] = { 12, 45, 35, 24, 60 };
    vector<int> array (vv, vv + 5);
    int choice;

    cout << "Please select which sort you'd like to see: " << endl << "1. selection"
        << endl << "2. insertion" << endl;
    cin >> choice;

        switch(choice) {
            case 1:
                selectionSort(array);
                break;
            case 2:
                array = insertionSort(array);
                break;
            default:
                cout << "Invalid choice was picked" << endl;
                break;
        }

        selectionSort(array);

        for (auto it = array.begin(); it != array.end(); it++) {
            cout << *it << ' ';
        }

    return 0;
}

vector<int> insertionSort(vector<int>& array) {
    vector<int> sortedArray;
    sortedArray.push_back(array[0]);
    bool inserted = false;

    for (auto it = array.begin() + 1; it != array.end(); it++) {
        for (auto it2 = sortedArray.begin() + 1; it2 != sortedArray.end(); it2++) {
            if ( it2 != sortedArray.begin() ) {
                if (*it2 < *it) {
                    sortedArray.insert(it2 - 1, *it);
                    inserted = true;
                }
            }
        }
        if (inserted == false) {
            sortedArray.push_back(*it);
        } else {
            inserted = false;
        }
    }

    return sortedArray;
}

void selectionSort(vector<int>& array) {
    int i, j;

    for (i = 0; i < array.size(); i++) {
        int smallest = array[i];
        int smallestIndex = i;

        for (j = i; j < array.size(); j++) {
            if (array[j] < smallest) {
                smallest = array[j];
                smallestIndex = j;
            }
        }

        int tempSmallest = smallest;

        array[smallestIndex] = array[i];
        array[i] = tempSmallest;
    }
    return;
}
