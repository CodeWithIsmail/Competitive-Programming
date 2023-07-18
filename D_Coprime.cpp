// https://codeforces.com/contest/1742/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, x, ans = -1;
        cin >> n;
        map<int, int> position;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            position[x] = max(position[x], i + 1);
        }
        for (auto x : position)
        {
            for (auto y : position)
            {
                if (gcd(x.first, y.first) == 1)
                {
                    ans = max(ans, x.second + y.second);
                }
            }
        }
        cout << ans << endl;
    }
}