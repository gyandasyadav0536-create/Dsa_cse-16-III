#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int depth = 0, maxDepth = 0;
    for (char c : s) {
        if (c == '(') {
            depth++;
            maxDepth = max(maxDepth, depth);
        } else if (c == ')') {
            depth--;
        }
    }
    return maxDepth;
}

int main() {
    string s;
    cout << "Enter a valid parentheses string: ";
    getline(cin, s);

    cout << "Nesting Depth = " << maxDepth(s) << endl;
    return 0;
}
