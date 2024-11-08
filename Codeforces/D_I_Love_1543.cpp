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

// Shortcut:
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
#define YES printf("YES");
#define Yes printf("Yes");
#define NO printf("NO");
#define No printf("No");

// Const value:
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

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

map<pair<ll, ll>, pair<ll, ll>> mp;
int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, i, j;
        cin >> n >> m;
        vector<string> v;
        for (i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            v.pb(x);
        }
        // for (i = 0; i < n; i++)
        // {
        //     cout << v[i] << "\n";
        // }

        i = 0, j = 0;
        ll let = 12;
        ll com = 0;
        ll ans = 0;
        for (ll z = 0; z < min(n, m) / 2; z++)
        {
            vector<char> temp;
            while (1)
            {
                // cout << i << " " << j << "\n";
                // cout << v[i][j] << " ";
                temp.pb(v[i][j]);
                if (j + 1 < m - com && i == com)
                {
                    // dane jabe
                    j++;
                }
                else if (i + 1 < n - com && j == m - com - 1)
                {
                    // niche jabe
                    i++;
                }
                else if (j - 1 >= 0 + com && i == n - com - 1)
                {
                    // bame
                    j--;
                }
                else if (i - 1 >= 0 + com && j == com)
                {
                    // upor
                    i--;
                }

                if (i == 0 + com && j == 0 + com)
                    break;
            }

            for (ll ex = 0; ex < 3; ex++)
                temp.pb(temp[ex]);
            // for (auto x : temp)
            //     cout << x << " ";

            for (ll k = 0; k + 3 < temp.size(); k++)
            {
                if (temp[k] == '1' && temp[k + 1] == '5' && temp[k + 2] == '4' && temp[k + 3] == '3')
                    ans++;
            }
            // cout << "\n";
            com++;
            i++;
            j++;
            // cout << "\n";
        }
        cout << ans << "\n";
    }
}
