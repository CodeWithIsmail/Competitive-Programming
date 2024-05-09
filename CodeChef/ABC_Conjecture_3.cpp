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
        ll n, i, ans = LONG_LONG_MAX, count1 = 0, count2 = 0, count3 = 0;
        cin >> n;
        string a;
        cin >> a;
        vl indA, indB, indC;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 'a')
                indA.pb(i);
            if (a[i] == 'b')
                indB.pb(i);
            if (a[i] == 'c')
                indC.pb(i);
        }
        ll co1 = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 'b')
                break;
            if (a[i] == 'a')
                co1++;
        }
        ll co2 = 0;
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] == 'b')
                break;
            if (a[i] == 'c')
                co2++;
        }
        ans = min(ans, co1 + co2);
        ll count = 0;
        // for (auto x : indA)
        //     cout << x << " ";
        // cout << "\n";
        // for (auto x : indB)
        //     cout << x << " ";
        // cout << "\n";
        // for (auto x : indC)
        //     cout << x << " ";
        // cout << "\n";
        for (auto x : indA)
        {
            ll inB = upper_bound(all(indB), x) - indB.begin();
            if (inB == indB.size())
                continue;
            ll inC = upper_bound(all(indC), indB[inB]) - indC.begin();
            if (inC == indC.size())
                continue;
            count1++;
            //     cout << x << " : " << indB[inB] << " " << indC[inC] << "\n";
        }
        // cout << "\n\n";
        for (auto x : indC)
        {
            ll inB = lower_bound(all(indB), x) - indB.begin();
            if (inB == 0)
                continue;
            ll inA = upper_bound(all(indA), indB[inB - 1]) - indA.begin();
            if (inA == 0)
                continue;
            count2++;
            //    cout << x << " : " << indB[inB - 1] << " " << indA[inA - 1] << "\n";
        }

        //  cout << "\n\n";
        for (auto x : indB)
        {
            ll inA = lower_bound(all(indA), x) - indA.begin();
            if (inA == 0)
                continue;
            ll inC = upper_bound(all(indA), x) - indC.begin();
            if (inC == indC.size())
                continue;
            count3++;
            //   cout << x << " : " << indA[inA - 1] << " " << indC[inC] << "\n";
        }
      //  cout << count1 << " " << count2 << " " << count3 << "\n";
        ans = min4(count1, count2, count3, ans);
        cout << ans << "\n";
    }
}