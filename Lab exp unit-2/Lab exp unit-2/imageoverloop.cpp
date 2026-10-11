#include <iostream>
using namespace std;

int main() {
    int x = 2147483647;
    cout << x << endl;

    x = x + 1;   // overflow
    cout << x << endl;

    return 0;
}