#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, R;
    cin >> S >> R;

    int T;
    cin >> T;

    int n = S.length();

    for (int i = 0; i < T; i++) {
        int x;
        cin >> x;

        int k = abs(x) % n;

        if (x > 0) {
            // Right rotation
            S = S.substr(n - k) + S.substr(0, n - k);
        }
        else if (x < 0) {
            // Left rotation
            S = S.substr(k) + S.substr(0, k);
        }
    }

    if (S == R)
        cout << "Password Accepted";
    else
        cout << "Again";

    return 0;
}