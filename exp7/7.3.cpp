#include <iostream>
using namespace std;
int main() {
    int a[] = {1, 5, 2, 4, 3};
    int i, j, key;

    for (i = 1; i < 5; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    cout << "sorted elements using insertion sort:\n";
    for (i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
} 