#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h, ans = 0, m;
        cin >> b >> c >> h;

        m = c + h;
        b -= 2;
        ans += 3;
        m--;

        ans += min(b, m) * 2;
        cout << ans << endl;
    }
}