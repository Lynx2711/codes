#include <iostream>
using namespace std;
void checkOddOrEven(int num) {
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checkOddOrEven(num);
    return 0;
}
