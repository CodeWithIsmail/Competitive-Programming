///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

// Data Type:
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

#define mem(a, b) memset(a, b, sizeof(a))

// Optimize cin cout:
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// Fraction:
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

const ll MOD = 1e9 + 7;

ll dp[200][10001];

ll solve(vl A, ll N)
{
    mem(dp, 0);
    dp[0][0] = 1;

    ll to = 0;

    for (ll a : A)
    {
        for (ll temp = N - 1; temp >= 0; temp--)
        {
            for (ll sum = temp * 100; sum >= 0; --sum)
                dp[temp + 1][sum + a] = (dp[temp + 1][sum + a] + dp[temp][sum]) % MOD;
        }
    }

    for (ll temp = 1; temp <= N; temp++)
    {
        for (ll sum = 0; sum <= temp * 100; ++sum)
        {
            if (sum % temp == 0)
                to = (to + dp[temp][sum]) % MOD;
        }
    }

    return to;
}

int main()
{
    optimize();
    ll T, t;
    cin >> T;
    // T = 100;

    for (t = 1; t <= T; ++t)
    {
        ll N, i;
        cin >> N;
        // N = 100;
        vl A(N);
        for (i = 0; i < N; ++i)
            cin >> A[i];
        cout << "Case " << t << ": " << solve(A, N) << "\n";
    }
}