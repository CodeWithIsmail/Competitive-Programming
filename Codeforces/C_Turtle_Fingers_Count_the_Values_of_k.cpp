// ///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

// ///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

// #include <bits/stdc++.h>
// using namespace std;

// // Data Type:
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// typedef pair<int, int> pii;
// typedef pair<double, double> pdd;
// typedef pair<ll, ll> pll;
// typedef vector<pii> vpi;
// typedef vector<pll> vpl;

// // Shortcut:
// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define min4(a, b, c, d) min(a, min(b, min(c, d)))
// #define max4(a, b, c, d) max(a, max(b, max(c, d)))
// #define pb push_back
// #define all(a) (a).begin(), (a).end()
// #define rall(a) (a).rbegin(), (a).rend()
// #define sz(x) (int)x.size()
// #define mem(a, b) memset(a, b, sizeof(a))
// #define sqr(a) ((a) * (a))
// ll gcd(ll a, ll b) { return __gcd(a, b); }
// ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
// #define YES printf("YES");
// #define Yes printf("Yes");
// #define NO printf("NO");
// #define No printf("No");

// // Const value:
// const double PI = acos(-1);
// const double eps = 1e-9;
// const int inf = 2000000000;
// const ll infLL = 9000000000000000000;
// #define MOD 1000000007

// // Optimize cin cout:
// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// // Fraction:
// #define fraction()                \
//     cout.unsetf(ios::floatfield); \
//     cout.precision(10);           \
//     cout.setf(ios::fixed, ios::floatfield);

// int main()
// {
//     optimize();
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll l, a, b, i, j, count = 0;
//         cin >> a >> b >> l;
//         set<ll> ans;
//         vl an;
//         bool br = false;
//         for (i = 0; i < 20; i++)
//         {
//             for (j = 0; j < 20; j++)
//             {
//                 ll temp = pow(a, i) * pow(b, j);
//                 if (l % temp == 0)
//                 {
//                     ans.insert(l / temp);
//                     an.pb(l / temp);
//                 }
//                 if (temp>l)
//                     break;
//             }
//         }
//         cout << ans.size() << "\n";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        set<ll> m;
        for (ll i = 0; pow(a, i) <= l; i++)
        {
            for (ll j = 0; pow(a, i) * pow(b, j) <= l; j++)
            {
                ll x = pow(a, i) * pow(b, j);
                if (l % x == 0)
                    m.insert(l / x);
            }
        }
        cout << m.size() << "\n";
    }
    return 0;
}
