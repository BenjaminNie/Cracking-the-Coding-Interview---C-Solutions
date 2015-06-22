#include <iostream>
#include <cstring>

void reverse_string(char in_string[]);

using namespace std;

int main (void)
{
    char orig_string[] = "abcdefghijklmn";

    reverse_string(orig_string);

    return 0;
}

void reverse_string(char in_string[])
{
    //char out_string[strlen(in_string)];
    char out_string[strlen(in_string)];
    int itr;

    for (itr = 0; itr < strlen(in_string); itr++) {
        out_string[itr] = in_string[ strlen(in_string) - itr - 1 ];
    }

    // Add null terminator to reversed string
    out_string[itr] = '\0';

    cout << "old string is " << in_string << endl;
    cout << "new string is " << out_string << endl;

    return;
}
