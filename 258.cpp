#include <bits/stdc++.h>
using namespace std;

int main() {
    int B, H, C;
    cin >> B >> H >> C;
    int maxBreadSandwiches = B / 2;
    // Total fillings available (ham + cheese)
    int totalFillings = H + C;
 int maxSandwiches = min(maxBreadSandwiches, totalFillings);
    cout << maxSandwiches << endl;
}
