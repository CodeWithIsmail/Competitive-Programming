#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, i, x, y;
    cin >> n >> q;
    int a[n];
    long long int b[n + 1] = {0};
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = 1; i <= n; i++)
        b[i] = b[i - 1] + a[i - 1];
    while (q--)
    {
        cin >> x >> y;
        cout << b[n - x + y] - b[n - x] << endl;
    }
}