#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, s = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = 0; i < n / 2; i++)
            s += a[n - 1 - i] - a[i];
        cout << s << endl;
    }
}