#include <iostream>
#include <string>

using namespace std;

bool isSlimp(string str);
bool isSlump(string str);

int main() {
    cout << "SLURPYS OUTPUT" << endl;
    int N;
    cin >> N;
    cin.ignore(); // Consume the newline character
    for (int i = 0; i < N; i++) {
        string input;
        getline(cin, input);

        int mid = input.length() - 1;
        while (mid >= 0 && input[mid] != 'C' && input[mid] != 'H') {
            mid--;
        }

        if (mid >= 0 && isSlimp(input.substr(0, mid + 1)) && isSlump(input.substr(mid + 1))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    cout << "END OF OUTPUT" << endl;

    return 0;
}

bool isSlimp(string str) {
    int len = str.length();

    if (len < 2) {
        return false;
    } else if (len == 2) {
        if (str == "AH") {
            return true;
        } else {
            return false;
        }
    } else {
        if (str[0] != 'A' || str[len - 1] != 'C') {
            return false;
        }
        if (str[1] == 'B') {
            return isSlimp(str.substr(2, len - 3));
        } else {
            return isSlump(str.substr(1, len - 2));
        }
    }
}

bool isSlump(string str) {
    int len = str.length();

    if (len < 3) {
        return false;
    } else if (str[0] != 'D' && str[0] != 'E') {
        return false;
    } else if (str[1] != 'F') {
        return false;
    } else if (str[len - 1] != 'G') {
        return false;
    }

    int idxF = 2;
    while (idxF < len && str[idxF] == 'F') {
        idxF++;
    }

    if (idxF == len) {
        return false;
    } else if (idxF == len - 1) {
        return true;
    }

    return isSlump(str.substr(idxF));
}
