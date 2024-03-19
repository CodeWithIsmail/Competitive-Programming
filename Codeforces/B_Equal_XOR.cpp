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
        int i, j, n, k;
        cin >> n >> k;
        vector<int> a, v, an1, an2;
        unordered_set<int> s;
        unordered_map<int, int> m1, m2;

        for (i = 0; i < 2 * n; i++)
        {
            int te;
            cin >> te;
            a.pb(te);
            if (i < n)
            {
                s.insert(a[i]);
                m1[a[i]]++;
            }
        }

        for (i = n; i < 2 * n; i++)
        {
            if (s.count(a[i]))
                v.pb(a[i]);
            m2[a[i]] = m2[a[i]] + 1;
        }

        int temp = k;

        for (auto it = m1.begin(); it != m1.end(); ++it)
        {
            if (it->second == 2 && k != 0)
            {
                an1.push_back(it->first);
                an1.push_back(it->first);
                k--;
            }
        }

        k = temp;

        for (auto it = m2.begin(); it != m2.end(); ++it)
        {
            if (it->second == 2 && k != 0)
            {
                an2.push_back(it->first);
                an2.push_back(it->first);
                k--;
            }
        }

        k = 2 * k;

        for (i = 0; i < v.size(); i++)
        {
            if (k != 0)
            {
                an1.push_back(v[i]);
                an2.push_back(v[i]);
                k--;
            }
        }

        for (i = 0; i < an1.size(); i++)
            cout << an1[i] << " ";
        cout << '\n';
        for (i = 0; i < an2.size(); i++)
            cout << an2[i] << " ";
        cout << '\n';
    }
}
