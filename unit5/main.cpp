#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence: ";
    int i = 1;
    while (i <= n) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
        i++;
    }

    return 0;
}