#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Word {
    public:
        Word();
        Word(string arg);
        void printAnagrams(int maxSize);
        void rotatePosition(int maxSize);
        int getSize();

   private:
        string word;
};

int main (void) {
    string userWord;

    cout << "Please enter word you wish to see anagrams of: " << endl;
    cin >> userWord;

    Word word(userWord);

    word.printAnagrams(word.getSize());
    return 0;
}

Word::Word() {
    word = "abcde";
}

Word::Word(string arg) {
    word = arg;
}

void Word::printAnagrams(int maxSize) {
    for (int i=0; i < maxSize; i++) {
        if (maxSize == 1) {
            return;
        }

        printAnagrams(maxSize - 1);

        if (maxSize == 2) {
            cout << word << "\t\t\t";
        }

        rotatePosition(maxSize);

        if (maxSize == word.size()) {
            cout << endl;
        }
    }
    return;
}

void Word::rotatePosition(int maxSize) {
    int position = word.size() - maxSize;
    char temp = word[position];
    for (int i = position; i < word.size(); i++) {
        word[i] = word[i + 1];
    }
    word[word.size() - 1] = temp;
}

int Word::getSize() {
    return word.size();
}
