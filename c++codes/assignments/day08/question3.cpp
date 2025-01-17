#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);
    string result = concatenateStrings(str1, str2);
    cout << "Concatenated string: " << result << endl;

    return 0;
}
