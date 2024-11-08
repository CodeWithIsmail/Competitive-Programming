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
        string a;
        cin >> a;
        ll n, i, j, z = a.size(), count = 0, st1, st2;
        cin >> n;
        for (i = 0; i + 3 < a.size(); i++)
        {
            if (a[i] == '1' && a[i + 1] == '1' && a[i + 2] == '0' && a[i + 3] == '0')
            {
                count++;
            }
        }
        for (i = 0; i < n; i++)
        {
            ll ind;
            char x;
            cin >> ind >> x;
            if (a[ind - 1] != x)
            {
                if (a[ind - 1] == '1')
                {
                    st1 = max(0ll, ind - 1);
                    st2 = max(0ll, ind - 2);
                }
                else
                {
                    st1 = max(0ll, ind - 3);
                    st2 = max(0ll, ind - 4);
                }
                string sub1 = a.substr(st1, min(4ll, z - st1));
                string sub2 = a.substr(st2, min(4ll, z - st2));
                if (ind == 7)
                {
                    // cout << sub1 << " " < sub2 << "\n";
                }
                if (sub1 == "1100")
                    count--;
                if (sub2 == "1100")
                    count--;
                if (st1 == st2 && sub1 == "1100")
                    count++;
                a[ind - 1] = x;
                for (j = max(0ll, ind - 4); j < ind + 4; j++)
                {
                    if (j + 3 >= a.size())
                        break;
                    string sub = a.substr(j, 4);
                    if (sub == "1100")
                        count++;
                }
            }
            cout << count << "\n";
            if (count <= 0)
                cout << "NO";
            else
                cout << "YES";
            cout << "\n";
        }
    }
}