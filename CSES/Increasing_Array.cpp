#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    long long int ans = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << ans;
}