#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, c, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        long long int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a, a + n);
        for (i = 1; i < n; i++)
            a[i] += a[i - 1];
        cout << upper_bound(a, a + n, c) - a << endl;
    }
}