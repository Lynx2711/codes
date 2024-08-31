#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;
    return 0;
}
