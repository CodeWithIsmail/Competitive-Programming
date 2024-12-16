#include <bits/stdc++.h>
typedef long long ll;
const ll inf = INT_MAX;
const ll N = 310;
ll shortestDistance[N][N], n;
using namespace std;

void sum()
{
    ll s = 0, i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            s += shortestDistance[i][j];
        }
    }
    cout << s / 2 << " ";
}
void floyd_warshall(ll k)
{
    ll i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            shortestDistance[i][j] = min(shortestDistance[i][j], shortestDistance[i][k] + shortestDistance[k][j]);
        }
    }
}
int main()
{
    ll i, j,q, u, v, w;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> shortestDistance[i][j];
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> u >> v >> w;
        shortestDistance[u][v] = shortestDistance[v][u] = min(w, shortestDistance[u][v]);
        floyd_warshall(u);
        // floyd_warshall(v);
        sum();
    }
}
