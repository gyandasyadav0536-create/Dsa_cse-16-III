#include<bits/stdc++.h>
using namespace std;
string interleaveStrings(const string& s1, const string& s2) {
    string result;
    int i = 0, j = 0;
    while (i < s1.size() || j < s2.size()) {
        if (i < s1.size()) result.push_back(s1[i++]);
        if (j < s2.size()) result.push_back(s2[j++]);
    }
    return result;
}
int main() {
    string a = "ABC";
    string b = "12345";
    cout << "Interleaved: " << interleaveStrings(a, b) << endl;
    return 0;
}

