#include <bits/stdc++.h>
using namespace std;

bool isAlphabet(char c) {
    return isalpha(c);
}

int main() {
    string s;
    getline(cin, s); 

    int i = 0, j = s.size() - 1;

    while (i < j) {
        if (!isAlphabet(s[i])) {
            i++; 
        } else if (!isAlphabet(s[j])) {
            j--; 
        } else {
            
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    cout << s << endl;
    return 0;
}
