#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, l;
    cin >> n >> l;
    double a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    double mx = 0;
    for (i = 1; i < n; i++)
    {
        double temp = (a[i] - a[i - 1]) / 2.0;
        mx = max(mx, temp);
    }
    mx = max(mx, a[0] - 0);
    mx = max(mx, l - a[n - 1]);

    cout << setprecision(10) << mx;
}