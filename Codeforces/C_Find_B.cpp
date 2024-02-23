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
        ll n, q, i;
        cin >> n >> q;
        ll a[n + 1], count[n + 1], pre[n + 1];
        a[0] = count[0] = 0, pre[n + 1] = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
            count[i] = count[i - 1];
            if (a[i] == 1)
                count[i]++;

            //  cout << count[i] << " ";
        }
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            if (b == a)
            {
                cout << "NO\n";
                continue;
            }
            ll co = count[b] - count[a - 1];
            ll dif = b - a + 1 - co;
            ll sum = pre[b] - pre[a - 1];
            //   cout<<sum<<"\n";
            ll remSum = sum - co;
            remSum -= dif;
          //  cout << remSum << "\n";
            ll rem = b - a + 1 - co;

            if (remSum < co)
            {
                cout << "NO\n";
            }
            else
                cout << "YES\n";
        }
        // cout << "\n";
    }
}