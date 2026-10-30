#include <bits/stdc++.h>
using namespace std;

string simplifyPath(string path) {
    vector<string> st;
    string part;

    stringstream ss(path);

    while (getline(ss, part, '/')) {
        if (part.empty() || part == ".") {
            continue;
        }
        else if (part == "..") {
            if (!st.empty()) {
                st.pop_back();
            }
        }
        else {
            st.push_back(part);
        }
    }

    string ans;
    for (string dir : st) {
        ans += "/" + dir;
    }

    return ans.empty() ? "/" : ans;
}

int main() {
    string path;

    cout << "Enter path: ";
    cin >> path;

    cout << "Simplified Path: " << simplifyPath(path) << endl;

    return 0;
}