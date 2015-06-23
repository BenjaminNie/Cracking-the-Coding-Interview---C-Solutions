#include <string>
#include <iostream>

int main (void)
{
    std::string str;
    int outer_it;
    int inner_it;
    char repeatChar;

    std::cout << "Please enter a string: " << std::endl;
    std::cin >> str;

    // search for all duplicates
    for (outer_it = 0; outer_it != str.length(); outer_it++) {
        std::cout << std::endl << std::endl << std::endl << std::endl << "outer_it is " << str[outer_it] << std::endl;
        for (inner_it = outer_it + 1; inner_it != str.length(); inner_it++) {
            std::cout << "inner_it is " << str[inner_it] << std::endl;
            if (str[outer_it] == str[inner_it]) {
                str[inner_it] = '\0';
            }
        }
    }

    // replace all duplicates using sort (bubble sort used for simplicity)
    for(outer_it = 0; outer_it != str.length(); outer_it++) {
        for (inner_it = outer_it; inner_it != str.length(); inner_it++) {
            std::cout << "str[inner_it] is equal to " << str[inner_it] << std::endl;
            if (str[inner_it] == '\0') {
                repeatChar = str[inner_it];
                str[inner_it] = str[inner_it + 1];
                str[inner_it + 1] = repeatChar;
            }
        }
    }

    std::cout << "The string with all duplicated characters removed is :" << str << std::endl;
    return 0;
}
