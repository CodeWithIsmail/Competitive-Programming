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
        ll n, i, k;
        cin >> n >> k;
        ll a[n + 1], b[n + 1];
        for (i = 1; i <= n; i++)
            a[i] = i;

        if (k % 2)
            cout << "No\n";
        else
        {
            if (k > (n * n) / 2)
            {
                cout << "No\n";
                continue;
            }
            ll sumCh = k / 2;
            ll le = 1, r = n;
            vpl change;
            map<ll, ll> mp;

            for (i = 1; i <= n; i++)
            {
                if (mp[i] != 0)
                    continue;
                le = i;
                ll niteParbo = (r - le);
                ll lagbe = sumCh;
                ll mn = min(lagbe, niteParbo);
                sumCh -= mn;

                r = le + mn;
                mp[le] = r;
                mp[r] = le;
                change.pb({le, r});
                change.pb({r, le});
                if (le != r)
                {
                    r--;
                    le++;
                }
            }
            cout << "Yes\n";
            for (i = 1; i <= n; i++)
                cout << mp[i] << " ";
            cout << "\n";
            // while (le <= r && sumCh > 0)
            // {
            //     ll dif = abs(le - r);
            //     if (dif <= sumCh)
            //     {
            //         change.pb({le, r});
            //         sumCh -= dif;
            //         le++;
            //         r--;
            //     }
            //     else
            //         break;
            // }

            // for (auto x : change)
            //     cout << x.first << " " << x.second << "\n";
            // cout << "\n";
            //  while()
        }

        //  ll mn = (n - 1) * 2;
        // if (k < mn)
        // {
        //     if (k % 2)
        //         cout << "No";
        //     else
        //     {
        //         ll targ = k / 2;
        //         swap(a[n], a[n - targ]);
        //         cout << "Yes\n";
        //         for (i = 1; i <= n; i++)
        //             cout << a[i] << " ";
        //     }
        // }
        // else
        // {
        //     ll ta = k / n, sum=0;
        //     for (i = 1; i <= n; i++)
        //     {
        //         b[i] = (a[i] + ta) % n;
        //         if (b[i] == 0)
        //             b[i] = n;
        //         sum += abs(a[i] - b[i]);
        //             //  cout << b[i] << " ";
        //     }
        //     if (sum == k)
        //     {
        //         cout << "Yes\n";
        //         for (i = 1; i <= n; i++)
        //         {
        //             cout << b[i] << " ";
        //         }
        //     }
        //     else
        //         cout << "No";
        // }
        // cout << "\n";
    }
}