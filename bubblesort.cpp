#include <iostream>
using namespace std;
void bubbleSort(int ratings[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (ratings[j] < ratings[j + 1]) {
                int temp = ratings[j];
                ratings[j] = ratings[j + 1];
                ratings[j + 1] = temp;
                swapped = true;
            }
            for (int k = 0; k < n; k++) {
                cout << ratings[k] << " ";
            }
            cout << endl;
        }
        if (!swapped) break;
    }
}
int main() {
    int n;
    cin>> n; 
    int ratings[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> ratings[i];
    }
    bubbleSort(ratings, n); 
    cout << "Final Sorted Array:\n";
    for (int i = 0; i < n; i++) {
        cout << ratings[i] << " ";
    }
    cout << endl;
    return 0;
}
