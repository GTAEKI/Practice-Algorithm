#include <iostream>
using namespace std;

bool is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
    return false;
}

bool method1(string word) {
    if (word.find("a") != string::npos || word.find("e") != string::npos ||
        word.find("i") != string::npos || word.find("o") != string::npos || word.find("u") != string::npos) {
        return true;
    }
    return false;
}

bool method2(string word) {
    int consec_consonants = 0;
    int consec_vowels = 0;

    for (int i = 0; i < word.length(); i++) {
        if (is_vowel(word[i])) {
            consec_vowels++;
            consec_consonants = 0;
        } else {
            consec_consonants++;
            consec_vowels = 0;
        }

        if (consec_consonants == 3 || consec_vowels == 3) {
            return false;
        }
    }
    return true;
}

bool method3(string word) {
    for (int i = 0; i < word.length() - 1; i++) {
        if (word[i] == word[i + 1]) {
            if (word[i] != 'e' && word[i] != 'o') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    string word;

    while (1) {
        cin >> word;
        if (word.compare("end") == 0) {
            break;
        }

        bool condition1 = method1(word);
        bool condition2 = method2(word);
        bool condition3 = method3(word);

        if (condition1 && condition2 && condition3) {
            cout << "<" << word << "> is acceptable.\n";
        } else {
            cout << "<" << word << "> is not acceptable.\n";
        }
    }
    return 0;
}
