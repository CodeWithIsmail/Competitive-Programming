#include <bits/stdc++.h>
using namespace std;
long long const MAX = 1e18 + 123;
long long const MOD = 1e9 + 7;
// #define MOD 1e9 + 7
// long long dp[MAX];

long long fibonacci(long long n, map<long long, long long> dp)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (dp[n] != -1)
        return dp[n];

    long long res = (fibonacci(n - 1, dp) % MOD + fibonacci(n - 2, dp) % MOD) % MOD;
    dp[n] = res;
    return dp[n];
}
int main()
{
    long long n, ans;
    cin >> n;
    map<long long, long long> dp(n);
    memset(dp, -1, sizeof(dp));
    ans = fibonacci(n, dp) % MOD;
    cout << ans;
}