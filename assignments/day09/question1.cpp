#include <iostream>
using namespace std;

int main() {
    int num;
    int *ptr; 
    cout << "Enter an integer value: ";
    cin >> num;
    ptr = &num;
    cout << "Value of the variable: " << num << endl;
    cout << "Value of the variable using the pointer: " << *ptr << endl;

    return 0;
}
