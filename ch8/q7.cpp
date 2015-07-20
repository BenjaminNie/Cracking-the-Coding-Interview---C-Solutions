#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int findNumberRepresentations(int target, int sum);

int main (void) {
    int targetNumber;
    cout << "Please enter the target number: " << endl;
    cin >> targetNumber;

    cout << "There are " << findNumberRepresentations(targetNumber, 25) << " number of combinations of quarters, dimes, nickels, and pennies that can be used to form " << targetNumber << " cents" << endl;
    return 0;
}

int findNumberRepresentations(int target, int sum) {
    int nextSum = 0;
    int count = 0;
    switch(sum) {
        case 25:
            nextSum = 10;
            break;
        case 10:
            nextSum = 5;
            break;
        case 5:
            nextSum = 1;
            break;
        case 1:
            cout << "HERE" << endl;
            return 1;
    }
    for (int i = 0; i * sum <= target; i++) {
        cout << "target*-i*sum = " << target-i*sum << ", sum = " << sum << ", target = " << target <<  ", nextSum = " << nextSum << ", iterator = " << i << " , count is = " << count << endl;
        count += findNumberRepresentations(target - i * sum, nextSum);
    }

    return count;
}
