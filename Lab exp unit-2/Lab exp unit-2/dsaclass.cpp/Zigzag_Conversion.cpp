#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1 || numRows >= s.length())
        return s;

    vector<string> rows(numRows);

    int currRow = 0;
    bool goingDown = false;

    for (char c : s) {
        rows[currRow] += c;

        if (currRow == 0 || currRow == numRows - 1)
            goingDown = !goingDown;

        currRow += goingDown ? 1 : -1;
    }

    string result;

    for (string row : rows)
        result += row;

    return result;
}

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;

    cout << convert(s, numRows) << endl;

    return 0;
}