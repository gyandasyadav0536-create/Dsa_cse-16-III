#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (x1 < a2 && a1 < x2 &&
        y1 < b2 && b1 < y2) {
        cout << "Overlap";
    } else {
        cout << "No Overlap";
    }

    return 0;
}