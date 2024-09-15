#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str1 = "Hello, World!";
    char ch1 = 'l';

    string str2 = "C++ programming!";
    char ch2 = 'g';

    cout << "In the string '" << str1 << "', the character '" << ch1 << "' occurs " << countCharacter(str1, ch1) << " times." << endl;

    cout << "In the string '" << str2 << "', the character '" << ch2 << "' occurs " << countCharacter(str2, ch2) << " times." << endl;

    return 0;
}
