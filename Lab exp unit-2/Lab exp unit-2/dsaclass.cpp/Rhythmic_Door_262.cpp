#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int ans = 0;
        char last = '#';
        int cnt = 0;

        for (char c : S) {
            if (c == last) {
                cnt++;
            } else {
                last = c;
                cnt = 1;
            }

            if (cnt == 3) {
                ans++;
                cnt = 0; // reset after opening
            }
        }

        cout << ans << "\n";
    }

    return 0;
}