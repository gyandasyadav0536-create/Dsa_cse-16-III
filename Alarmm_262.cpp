#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        int ans = 0;
        int covered = -1; // last protected index

        for (int i = 0; i < N; i++) {
            if (S[i] == '1' && i > covered) {
                ans++;

                int p = min(i + K, N - 1); // place alarm
                covered = p; // covers [p-K, p], so all positions <= p are handled
            }
        }

        cout << ans << "\n";
    }

    return 0;
}