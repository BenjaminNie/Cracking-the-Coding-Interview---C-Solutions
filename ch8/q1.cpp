#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int generateFib(int num);

int main(void) {

    int num;

    cout << "Please choose the nth Fibonnacci number you wish to see" << endl;
    cin >> num;
    cout << "The " << num << "th Fibbonacci number is " << generateFib(num) << endl;

    return 0;
}

int generateFib(int num) {
    if (num == 1)
        return 1;
    else
        return (num + generateFib(num-1));
}
