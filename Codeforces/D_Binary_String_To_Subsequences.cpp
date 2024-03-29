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
        ll n, i;
        string a;
        deque<ll> zero, one, temp;
        vector<deque<ll>> ans;
        map<ll, ll> ind;
        ll count = 1;

        cin >> n >> a;
        if (a[0] == '1')
            zero.pb(-1);
        for (i = 0; i < n; i++)
        {
            if (a[i] == '0')
                zero.pb(i);
            else
                one.pb(i);
        }
        for (auto y : zero)
            cout << y << " ";
        cout << "\n";
        for (auto y : one)
            cout << y << " ";
        cout << "\n";

        // temp.pb(-1);
        // while (!one.empty() && !zero.empty())
        // {
        //     if (zero.front() < temp.back())
        //     {
        //         temp.pop_front();
        //         ans.pb(temp);
        //         temp.clear();
        //     }
        //     temp.pb(zero.front());
        //     zero.pop_front();
        //     if (one.front() < temp.back())
        //     {
        //         if (zero.empty())
        //         {
        //             if (!one.empty())
        //             {
        //                 if (one.back() > temp.back())
        //                 {
        //                     temp.pb(one.back());
        //                     one.pop_back();
        //                 }
        //             }
        //             break;
        //         }
        //         temp.pop_front();
        //         ans.pb(temp);
        //         temp.clear();
        //         temp.pb(-1);
        //         if (zero.front() > one.front())
        //         {
        //             temp.pb(one.front());
        //             one.pop_front();
        //             if (one.empty())
        //             {
        //                 if (!zero.empty())
        //                 {
        //                     if (zero.back() > temp.back())
        //                     {
        //                         temp.pb(zero.back());
        //                         zero.pop_back();
        //                     }
        //                 }
        //             }
        //         }
        //     }
        //     else
        //     {
        //         temp.pb(one.front());
        //         one.pop_front();

        //         if (one.empty())
        //         {
        //             if (!zero.empty())
        //             {
        //                 if (zero.back() > temp.back())
        //                 {
        //                     temp.pb(zero.back());
        //                     zero.pop_back();
        //                 }
        //             }
        //         }
        //     }
        // }
        // if (temp.size() > 1)
        //     ans.pb(temp);

        // for (auto x : ans)
        // {
        //     for (auto y : x)
        //         ind[y] = count;
        //     count++;
        // }
        // ll rem = 0;
        // for (i = 0; i < n; i++)
        // {
        //     if (ind[i] == 0)
        //         rem++;
        // }
        // cout << ans.size() + rem << "\n";
        // for (i = 0; i < n; i++)
        // {
        //     if (ind[i] == 0)
        //     {
        //         cout << count;
        //         count++;
        //     }
        //     else
        //         cout << ind[i];
        //     cout << " ";
        // }

        cout << "\n";
    }
}