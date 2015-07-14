#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int findNumberPaths(int row, int col, int maxRow, int maxCol);

int main (void) {
    int num = 1;
    int dim;

    cout << "Please enter the dimensions of this NxN grid" << endl;
    cin >> dim;
    cout << "The number of possible paths the robot can take through this grid is " << findNumberPaths(num, num, dim, dim);

    return 0;
}

int findNumberPaths(int row, int col, int maxRow, int maxCol) {
    if ((row == maxRow) && (col == maxCol))
        return 0;

    else if ((row == maxRow) || (col == maxCol))
        return 1;

    else
        return (findNumberPaths(row, col+1, maxRow, maxCol) + findNumberPaths(row+1, col, maxRow, maxCol));
}
