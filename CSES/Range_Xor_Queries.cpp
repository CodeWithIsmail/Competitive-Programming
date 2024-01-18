#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, i;
    cin >> n >> q;
    int a[n + 1], pre[n + 1];
    a[n] = pre[n] = 0;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
        pre[i] = pre[i - 1] ^ a[i];

    while (q--)
    {
        int l, r, ans;
        cin >> l >> r;
        ans = pre[r] ^ pre[l - 1];
        cout << ans << endl;
    }
}