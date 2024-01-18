// https : // codeforces.com/contest/1042/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, sum = 0, Max, ans;
    cin >> n >> m;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    Max = *max_element(a, a + n);
    ans = Max + m;
    i = 0;
    while (m > 0 && i < n)
    {
        m -= (Max - a[i]);
        if (m <= 0)
            break;
        i++;
    }

    if (m > 0)
        Max += (m + n - 1) / n;
    cout << Max << " " << ans;
}