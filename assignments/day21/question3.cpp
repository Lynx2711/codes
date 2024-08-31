#include <iostream>
#include <string>
using namespace std;

void countVowelsAndConsonants(string str) {
    int vowels = 0, consonants = 0;

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    countVowelsAndConsonants(str);

    return 0;
}
