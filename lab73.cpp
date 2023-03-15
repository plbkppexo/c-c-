#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string name;
    double salary;
    cin >> name;
    cin >> salary;
    double sale, total = 0;
    int i, month = 12;
    for (i = 0; i < month; i++) {
        cin >> sale;
        total += salary;
        total += (sale * 15.0 / 100.0);
    }
    char output[50];
    cout << name;
    double j;
    j = sprintf(output, " %.2lf", total);
    cout << output;
}