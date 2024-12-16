#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 510;
const ll inf = INT_MAX;
ll shortestDistance[N][N], num[N][N];

int main()
{
    ll n, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> shortestDistance[i][j];
            num[i][j] = shortestDistance[i][j];
        }
    }
    ll m = n;
    ll check[n + 1];
    memset(check, 0, sizeof(check));
    while (m--)
    {
        ll rmv, ans = 0;
        cin >> rmv;
        for (k = 1; k <= n; k++)
        {
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= n; j++)
                {
                    shortestDistance[i][j] = min(shortestDistance[i][j], shortestDistance[i][k] + shortestDistance[k][j]);
                }
            }
        }
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (shortestDistance[i][j] != inf)
                    ans += shortestDistance[i][j];
            }
        }
        cout << ans << " ";
        check[rmv] = 1;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                check[i] || check[j] ? shortestDistance[i][j] = inf : shortestDistance[i][j] = num[i][j];
            }
        }
    }
}