#include <bits/stdc++.h>
using namespace std;
int power(int A, int n) {
    if (n == 0) return 1;
    return A * power(A, n - 1);
}

int main() {
    int A, n;
    cout << "Enter base (A): ";
    cin >> A;
    cout << "Enter exponent (n): ";
    cin >> n;

    cout << A << "^" << n << " = " << power(A, n) << endl;
    return 0;
}
