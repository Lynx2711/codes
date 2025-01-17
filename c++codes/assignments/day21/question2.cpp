#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversedStr = reverseString(str);
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
