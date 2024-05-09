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
        ll i, n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        ll p[n + 1], a[n + 1];
        for (i = 1; i <= n; i++)
            cin >> p[i];
        for (i = 1; i <= n; i++)
            cin >> a[i];

        vl b;
        ll current = pb;
        map<ll, bool> check_b;
        for (i = 0; i < k; i++)
        {
            if (check_b[current])
                break;
            check_b[current] = true;
            if (current <= n)
            {
                b.pb(a[current]);
                current = p[current];
            }
            else
                break;
        }
        // for (auto x : b)
        //     cout << x << " ";
        // cout << "\n";
        ll rem = k, mx_b = -1, l_sum = 0;
        for (i = 0; i < b.size(); i++)
        {
            ll temp = l_sum + b[i] * rem;
          //  cout<<temp<<" ";
            l_sum += b[i];
            mx_b = max(mx_b, temp);
            rem--;
        }
      //    cout << mx_b << "\n";

        vl s;
        ll current_s = ps;
        map<ll, bool> check_s;
        for (i = 0; i < k; i++)
        {
            if (check_s[current_s])
                break;
            check_s[current_s] = true;
            if (current_s <= n)
            {
                s.pb(a[current_s]);
                current_s = p[current_s];
            }
            else
                break;
        }
        // for (auto x : s)
        //     cout << x << " ";
        // cout << "\n";
        ll rem_s = k, mx_s = -1, l_sum_s = 0;
        for (i = 0; i < s.size(); i++)
        {
            ll temp = l_sum_s + s[i] * rem_s;
          //     cout<<temp<<" ";
            l_sum_s += s[i];
            mx_s = max(mx_s, temp);
            rem_s--;
        }
         // cout << mx_s << "\n";

        if (mx_s > mx_b)
            cout << "Sasha";
        else if (mx_s < mx_b)
            cout << "Bodya";
        else
            cout << "Draw";
        cout << "\n";
    }
}