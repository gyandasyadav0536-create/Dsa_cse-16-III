#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<string>& result, string current,
               int open, int close, int n) {

    // Base case
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    // Add opening parenthesis
    if (open < n) {
        backtrack(result, current + "(", open + 1, close, n);
    }

    // Add closing parenthesis
    if (close < open) {
        backtrack(result, current + ")", open, close + 1, n);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    backtrack(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "Output: [";
    for (int i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";

        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

