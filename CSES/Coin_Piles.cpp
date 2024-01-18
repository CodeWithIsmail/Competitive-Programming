#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, m, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        m = min(a, b);
        n = max(a, b);
        (a + b) % 3 == 0 && 2 * m >= n ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}