#include <bits/stdc++.h>
using namespace std;

int main() {
string str;
stack<char> st;
cout << "Enter string: ";
cin >> str;

for (char c : str) {
    st.push(c);
}

cout << "Reversed string: ";

while (!st.empty()) {
    cout << st.top();
    st.pop();
}

cout << endl;
return 0;

}
