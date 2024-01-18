// https://codeforces.com/contest/1742/problem/E
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, q, x, i, m = 0, index;
        cin >> n >> q;
        long long a[n + 1], prefixSum[n + 1], Max[n + 1];
        a[0] = prefixSum[0] = Max[0] = 0;

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefixSum[i] = prefixSum[i - 1] + a[i];
        }
        for (i = 1; i <= n; i++)
        {
            if (a[i] > m)
                m = a[i];
            Max[i] = m;
        }
        while (q--)
        {
            cin >> x;
            cout << prefixSum[upper_bound(Max, Max + n + 1, x) - Max - 1] << " ";
        }
        cout << endl;
    }
}