#include <iostream>
#include <string>
#include <vector>

int main (void)
{
    int char_val;
    std::string str;
    std::string::const_iterator str_it;

    std::vector<bool> unique;
    std::vector<bool>::iterator unique_it;
    unique.resize(128);  // 128 chars in 7 bit ASCII

    for (unique_it = unique.begin(); unique_it != unique.end(); unique_it++) {
        *unique_it = false;
    }

    std::cout << "Please input string" << std::endl;
    std::cin >> str;

    for (str_it = str.begin(); str_it != str.end(); str_it++) {
        std::cout << "outputted char is " << *str_it << std::endl;
        char_val = (int)(*str_it);  // cast char as int value

        if (unique[char_val] == true) {
            std::cout << "The letter " << *str_it << " appears more than once in the str" << std::endl;
            return 0;
        }
        else
            unique[char_val] = true;
    }
}
