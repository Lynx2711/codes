#include <iostream>
#include <string>
#include <cctype>  // for tolower() and isalnum()

using namespace std;

bool isPalindrome(const string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        
        while (left < right && !isalnum(str[left])) {
            left++;
        }  
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string testStr;
    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, testStr);
    if (isPalindrome(testStr)) {
        cout << "\"" << testStr << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << testStr << "\" is not a palindrome." << endl;
    }

    return 0;
}
