#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, ans = 0;
    cin >> n;
    long long a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (auto x : a)
        ans += abs(x - a[n / 2]);
    cout << ans;
}