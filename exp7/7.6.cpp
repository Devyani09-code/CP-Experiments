#include <iostream>
using namespace std;
int main() {
    int a[] = {1, 5, 2, 4, 3, -3, 0};
    int i, j, k;

    for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 7; j++) {
            for (k = j + 1; k < 7; k++) {
                if (a[i] + a[j] + a[k] == 0) {
                    cout << a[i] << " " << a[j] << " " << a[k] << "\n";
                }
            }
        }
    }
}
