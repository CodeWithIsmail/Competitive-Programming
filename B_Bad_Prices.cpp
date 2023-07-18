// https://codeforces.com/contest/1213/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, m = INT_MAX, count = 0;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = n - 1; i >= 0; i--)
        {
            m = min(m, a[i]);
            b[i] = m;
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                count++;
        }
        cout << count << endl;
    }
}