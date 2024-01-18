// https : // codeforces.com/problemset/problem/59/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, ans = 0, min_odd = 101;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x < min_odd && x % 2 != 0)
            min_odd = x;
        ans += x;
    }
    if (min_odd == 101)
    {
        cout << 0;
        return 0;
    }
    ans % 2 ? cout << ans : cout << ans - min_odd;
}