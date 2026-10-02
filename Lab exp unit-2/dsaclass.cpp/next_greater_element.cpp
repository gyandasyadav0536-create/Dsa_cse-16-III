#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Print original array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int nge[n]; // Next Greater Element array
    stack<int> st;

    nge[n-1] = -1; // Last element has no NGE
    st.push(arr[n-1]);

    for(int i=n-2; i>=0; i--) {
        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if(st.empty()) {
            nge[i] = -1;
        } else {
            nge[i] = st.top();
        }
        st.push(arr[i]);
    }

    // Print NGE array
    for(int i=0; i<n; i++) {
        cout << nge[i] << " ";
    }
    cout << endl;

    return 0;
}
