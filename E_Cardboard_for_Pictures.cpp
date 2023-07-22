#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, i;
        cin >> n >> k;
        long long a[n];

        for (i = 0; i < n; i++)
            cin >> a[i];

        long long l = 1, r = 1e9;
        long long ans = -1;

        while (l <= r)
        {
            long long mid = (l + r) / 2;
            long long s = 0;
            for (i = 0; i < n; i++)
            {
                s += ((2 * mid + a[i]) * (2 * mid + a[i]));
                if (s > k)
                    break;
            }

            if (s > k)
                r = mid - 1;
            else if (s < k)
                l = mid + 1;
            else
            {
                ans = mid;
                break;
            }
        }
        cout << ans << endl;
    }
}