#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool determineAnagram(string str1, string str2);

int main (void)
{
    string str1;
    string str2;
    bool isAnagram;

    cout << "Please enter the value of string 1: " << endl;
    cin >> str1;

    cout << "Please enter the value of string 2: " << endl;
    cin >> str2;

    isAnagram = determineAnagram(str1, str2);
    return 0;
}

bool determineAnagram(string in_str1, string in_str2) {
    if (in_str1.length() != in_str2.length())
        return false;

    string str1 = in_str1;
    string str2 = in_str2;

    int it1;
    int it2;

    for (it1 = 0; it1 < str1.length(); it1++) {
        it2 = 0;
        while (it2 <= str2.length()) {
            if (it2 == str2.length()) {
                cout << in_str1 << " and " << in_str2 << " are not anagrams" << endl;
                return false;
            }
            else if (str2[it2] == str1[it1]) {
                str2[it2] = '\0';
                break;
            }
            it2++;
        }
    }

    cout << in_str1 << " and " << in_str2 << " are anagrams" << endl;
    return true;
}
