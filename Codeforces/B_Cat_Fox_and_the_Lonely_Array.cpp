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

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];

        ll low = 1, up = n, ans = infLL;
        while (low <= up)
        {
            ll mid = (low + up) / 2;
            map<ll, ll> countIndex, copy;
            bool check = true;

            for (i = 0; i < mid; i++)
            {
                std::bitset<20> b(a[i]);
                string binary = b.to_string();
                for (j = 0; j < 20; j++)
                {
                    if (binary[j] == '1')
                        countIndex[j]++;
                }
            }
            copy = countIndex;
            for (i = 1; i + mid <= n; i++)
            {
                std::bitset<20> b(a[i + mid - 1]);
                string binary = b.to_string();
                for (j = 0; j < 20; j++)
                {
                    if (binary[j] == '1')
                        copy[j]++;
                }
                std::bitset<20> c(a[i - 1]);
                binary = c.to_string();
                for (j = 0; j < 20; j++)
                {
                    if (binary[j] == '1')
                        copy[j]--;
                }
                for (j = 0; j < 20; j++)
                {
                    if ((countIndex[j] > 0 && copy[j] == 0) || (countIndex[j] == 0 && copy[j] > 0))
                    {
                        check = false;
                        break;
                    }
                }
                if (!check)
                    break;
            }
            if (check)
            {
                ans = min(ans, mid);
                up = mid - 1;
            }
            else
                low = mid + 1;
        }
        cout << ans << "\n";
    }
}