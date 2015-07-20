#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void findParen( int left, int right, int count, char str[]);

int main (void) {
    int count = 3;
    char str[6];

    findParen(count, count, 0, str);

    return 0;
}

void findParen( int left, int right, int count, char str[]) {
    if ((left < 0) || (left > right)) {
        return;
    }
    if ((left == 0) && (right == 0)) {
        for (int i = 0; i < count; i++) {
            cout << str[i];
        }
        cout << endl;
    } else {
        if (left > 0) {
            str[count] = '(';
            findParen( left-1, right, count+1, str);
        }
        if (left < right) {
            str[count] = ')';
            findParen( left, right-1, count+1, str);
        }
     }
}
