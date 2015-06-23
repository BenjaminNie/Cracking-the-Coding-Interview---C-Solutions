#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main (void) {
    string str1;
    string str2;
    string::const_iterator it1;
    int it2 = 0;

    cout << "Please enter a string: " << endl;
    getline(cin, str1);

    for (it1 = str1.begin(); it1 != str1.end(); it1++) {
        if (*it1 == ' ') {
            str2.append("%");
            str2.append("2");
            str2.append("0");
        }
        else {
            str2.append(it1, it1 + 1);
        }
    }

    cout << "str1 is " << str1 << endl;
    cout << "str2 is " << str2 << endl;
}


