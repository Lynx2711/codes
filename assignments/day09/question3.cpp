#include <iostream>
using namespace std;

int main() {
    int num = 100;   
    int *ptr1;       
    int **ptr2;      // Pointer to the pointer
    ptr1 = &num;
    ptr2 = &ptr1;
    cout << "Value of num using the variable: " << num << endl;
    cout << "Value of num using ptr1 (pointer): " << *ptr1 << endl;
    cout << "Value of num using ptr2 (pointer to pointer): " << **ptr2 << endl;

    return 0;
}
