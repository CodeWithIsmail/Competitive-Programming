#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, n, s = 1, x;
    cin >> n;
    x = 1e9 + 7;
    for (i = 1; i <= n; i++)
        s = (2 * s) % x;

    cout << s;
}