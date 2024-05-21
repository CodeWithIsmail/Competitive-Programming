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
        ll n, i, ans = 0;
        cin >> n;
        ll a[n];
        map<string, ll> count;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n - 2; i++)
        {
            string x = to_string(a[i]);
            string y = to_string(a[i + 1]);
            string z = to_string(a[i + 2]);

            string temp1, temp2, temp3, temp;
            temp1 = x + y + '_';
            temp2 = x + '_' + z;
            temp3 = '_' + y + z;
            temp = x + y + z;

            // if(count[temp]>0) continue;

            // cout << temp1 << " " << temp2 << " " << temp3 << " " << temp << ": ";
            bool ch = false;

            if (count[temp1] - count[temp] >= 0)
                ans += count[temp1] - count[temp], ch = true;
            if (count[temp2] - count[temp] >= 0)
                ans += count[temp2] - count[temp];
            // {
            //     if (ch == true)
            //     {
            //         if (count[temp2] > 1)
            //             ans += count[temp2] - count[temp];
            //     }
            //     else
            //         ans += count[temp2] - count[temp];
            // }
            // ans++, ch = true;
            if (count[temp3] - count[temp] >= 0)
             ans += count[temp3] - count[temp];
            // {
            //     if (ch == true)
            //     {
            //         if (count[temp3] > 1)
            //             ans += count[temp3] - count[temp] + 1;
            //     }
            //     else
            //         ans += count[temp3] - count[temp];
            // }
            //  ans++, ch = true;
            //   cout << ans << "\n";
            count[temp1]++;
            count[temp2]++;
            count[temp3]++;
            count[temp]++;
        }
        cout << ans << "\n";
    }
}