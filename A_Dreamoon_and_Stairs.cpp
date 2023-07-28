#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, m;
    cin >> n >> c;
    for (m = c; m <= n; m += c)
    {
        if (n - m >= 0 && 2 * m - n >= 0)
        {
            cout << m;
            return 0;
        }
    }
    cout << -1;
}