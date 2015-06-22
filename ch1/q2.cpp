#include <cstring>
#include <iostream>

void reverse_str(char str[], char rev_str[]);

int main (void)
{
    char str[100];
    char rev_str[100];

    std::cout << "Please enter a string to be reversed by the program: " << std::endl;
    std::cin >> str;

    reverse_str(str, rev_str);

    std::cout << "The reversed str is " << rev_str << std::endl;
    return 0;
}

void reverse_str(char str[], char rev_str[]){
    int str_size = strlen(str);
    int i;

    for (i=0; i < strlen(str); i++) {
        rev_str[str_size - 1 - i] = str[i];
    }

    rev_str[str_size] = '\0';
    return;
}
