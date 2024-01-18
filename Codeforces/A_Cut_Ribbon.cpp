// https://codeforces.com/problemset/problem/189/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, i, j, x, y, mx = 0;
    cin >> n >> a >> b >> c;
    for (i = 0; i <= 4000; i++)
    {
        for (j = 0; j <= 4000; j++)
        {
            x = a * i + b * j;
            if (x <= n && (n - x) % c == 0)
                mx = max(mx, i + j + (n - x) / c);
        }
    }
    cout << mx;
}