#include <iostream>
#include <string>

using namespace std;

int stringLength(const string &str) {
    return str.length();  
}

int main() {
    string str1 = "Hello, World!";
    string str2 = "This is aditi";
    string str3 = "";

    cout << "Length of '" << str1 << "' is: " << stringLength(str1) << endl;
    cout << "Length of '" << str2 << "' is: " << stringLength(str2) << endl;
    cout << "Length of an empty string is: " << stringLength(str3) << endl;

    return 0;
}
