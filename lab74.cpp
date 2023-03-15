#include <iostream>
using namespace std;

int main() {
    int n, i, j, m, max = 0;
    cin >> n;
    int num[n];
    for (i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (i = 0; i < n; i++) {
        if (num[i] > max) max = num[i];
    }
    int number[max];
    for (i = 0; i < max; i++) {
        number[i] = i + 1;
    }
    for (i = 0; i < max; i++) {
        m = i + 1;
        for (j = 0; j < n; j++) {
            if (m == num[j]) {
                number[m - 1] = 0;
            }
        }
    }
    int k = 0;
    int d_2 = max / 2;
    int odd[d_2] = {0};
    int even[d_2] = {0};
    for (i = 0; i < max; i++) {
        if (number[i] != 0) {
            if (number[i] % 2 != 0) {
                odd[k] = number[i];
                k++;
            }
        }
    }
    k = 0;
    for (i = 0; i < max; i++) {
        if (number[i] != 0) {
            if (number[i] % 2 == 0) {
                even[k] = number[i];
                k++;
            }
        }
    }
    for (i = 0; i < d_2; i++) {
        if (odd[i] != 0) {
            cout << odd[i] << ' ';
        } else {
            cout << endl;
            break;
        }
    }
    for (i = 0; i < d_2; i++) {
        if (even[i] != 0) {
            cout << even[i] << ' ';
        } else {
            cout << endl;
            break;
        }
    }
}