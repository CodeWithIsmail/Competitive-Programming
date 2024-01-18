#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        int pos = 0, neg = 0, ans, target;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] == 1 ? pos++ : neg++;
        }
        if (pos < neg)
        {
            target = (n + 1) / 2;
            ans = target - pos;
            neg -= ans;
            if (neg % 2)
                ans++;
        }
        else
            neg % 2 ? ans = 1 : ans = 0;

        cout << ans << endl;
    }
}