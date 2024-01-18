#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e4 + 123;
// const int MOD = 10000007;
#define MOD 10000007
int dp[MAX];
int a, b, c, d, e, f;
long long fn(int n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;
    if (dp[n] != -1)
        return dp[n];
    long long res = ((fn(n - 1) % MOD) + (fn(n - 2) % MOD) + (fn(n - 3) % MOD) + (fn(n - 4) % MOD) + (fn(n - 5) % MOD) + (fn(n - 6) % MOD)) % MOD;
    dp[n] = res;
    return dp[n];
}
int main()
{
    int t, i;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        int n;
        cin >> a >> b >> c >> d >> e >> f >> n;
        memset(dp, -1, sizeof(dp));
        cout << "Case " << i << ": " << fn(n) << endl;
    }
}