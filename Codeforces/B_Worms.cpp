// https://codeforces.com/problemset/problem/474/B
// Binary search & lower_bound problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, i, x;
    cin >> n;
    long long a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i)
            a[i] += a[i - 1];
    }
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> x;
        cout << 1 + lower_bound(a, a + n, x) - a << endl;
    }
}