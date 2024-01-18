#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, i, ans = 0;
    cin >> n >> k;

    long long a[n + 1], sum[n + 1];
    sum[0] = 0;
    for (i = 1; i <= n; i++)
        cin >> a[i];

    for (i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i];

    map<long long, long long> count;
    for (i = 0; i <= n; i++)
        count[sum[i]]++;

    for (i = n; i > 0; i--)
    {
        count[sum[i]]--;
        ans += count[sum[i] - k];
    }
    cout << ans;
}