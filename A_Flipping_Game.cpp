// https://codeforces.com/problemset/problem/327/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, one = 0, zero = 0, ans = 0, temp;
    cin >> n;
    int a[n + 1], count_0[n + 1], count_1[n + 1];
    a[0] = count_0[0] = count_1[0] = 0;

    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] ? one++ : zero++;
        count_0[i] = zero;
        count_1[i] = one;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            temp = (count_0[j] - count_0[i - 1]) + count_1[i - 1] + (count_1[n] - count_1[j]);
            ans = max(ans, temp);
        }
    }
    cout << ans;

    // for(i=0;i<=n;i++)
    // {
    //     cout<<count_0[i]<<" ";
    // }
    // cout<<endl;
    // for(i=0;i<=n;i++)
    // {
    //     cout<<count_1[i]<<" ";
    // }
}