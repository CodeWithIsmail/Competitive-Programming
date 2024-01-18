#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i, ans = 0, sum = 0;
        cin >> n;
        long long a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0 && i < n - 1)
            {
                sum += a[i];
                ans += (a[i] + 1) / 2;
            }
        }
        ((n == 3 && a[1] % 2 != 0) || sum == n - 2) ? cout << -1 : cout << ans;
        cout << endl;
    }
}