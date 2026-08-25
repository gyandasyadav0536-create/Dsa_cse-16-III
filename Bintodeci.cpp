#include <bits/stdc++.h>
using namespace std;


int bintodec(int N) {
    if (N == 0) return 0;
    return bintodec(N / 10) * 2 + (N % 10);
}

int main() {
    int N;
    cin >> N;   
    cout << bintodec(N) << endl;  
    return 0;
}
