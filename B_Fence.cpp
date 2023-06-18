#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k, ans, min;
    cin >> n >> k;
    int a[n], prefix_sum[n + 1] = {0}, b[n - k + 1] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        prefix_sum[i + 1] += prefix_sum[i] + a[i];
    }
    for (i = 0; i <= n - k; i++)
        b[i] = prefix_sum[i + k] - prefix_sum[i];
    min = b[0];
    for (i = 0; i <= n - k; i++)
    {
        if (b[i] <= min)
        {
            ans = i;
            min = b[i];
        }
    }
    cout << ans + 1;
}