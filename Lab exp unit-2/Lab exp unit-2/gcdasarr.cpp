
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;

    return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ele = arr[0];

    for (int i = 1; i < n; i++)
    {
        ele = gcd(ele, arr[i]);
    }

    cout << ele << endl;

    return 0;
}