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
    ll n, i;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
        cout << -1;
    else if (n == 2)
    {
        sort(a, a + n);
        ll div = a[1] - a[0];
        if (div == 0)
        {
            cout << "1\n"
                 << a[0];
            return 0;
        }
        if (div % 2 == 0)
        {
            cout << "3\n"
                 << a[0] - div << " " << a[0] + div / 2 << " " << a[n - 1] + div;
        }
        else
        {
            cout << "2\n"
                 << a[0] - div << " " << a[n - 1] + div;
        }
    }
    else
    {
        sort(a, a + n);
        map<ll, vpl> vp;
        for (i = 1; i < n; i++)
            vp[a[i] - a[i - 1]].pb({a[i], a[i - 1]});
        if (vp.size() == 1)
        {
            ll temp = a[1] - a[0];
            if (temp == 0)
                cout << "1\n"
                     << a[0];
            else
                cout << "2\n"
                     << a[0] - temp << " " << a[n - 1] + temp;
        }
        else if (vp.size() == 2)
        {
            ll dif = -1, com = -1;
            bool done = false;
            pair<ll, ll> p, q;

            for (auto x : vp)
            {
                if (x.second.size() == 1)
                {
                    if (done)
                    {
                        com = x.first, q = x.second.front();
                    }
                    else
                    {
                        dif = x.first;
                        p = x.second.front();
                        done = true;
                    }
                }
                else
                    com = x.first, q = x.second.front();
            }
            if (dif == com * 2)
            {
                cout << "1\n"
                     << p.first - com;
            }
            else if (dif * 2 == com && n==3)
            {
                cout << "1\n"
                     << q.first - dif;
            }
            else
                cout << "0";
        }
        else
            cout << "0";
    }
}