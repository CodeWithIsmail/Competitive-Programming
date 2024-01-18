#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, i;
    cin >> n >> q;
    long long int a[n + 1];
    a[0] = 0;
    for (i = 1; i <= n; i++)
        cin >> a[i];
 
    for (i = 1; i <= n; i++)
        a[i] += a[i - 1];
 
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
}