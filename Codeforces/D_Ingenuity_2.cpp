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
        ll N, i;
        string a;
        cin >> N >> a;
        map<char, ll> count;
        for (i = 0; i < N; i++)
        {
            count[a[i]]++;
        }

        ll n = count['N'], s = count['S'], e = count['E'], w = count['W'];

        if ((n == 1 && s == 1 && w == 0 && e == 0) || (n == 0 && s == 0 && w == 1 && e == 1) || n % 2 != s % 2 || w % 2 != e % 2)
        {
            cout << "NO\n";
            continue;
        }
        // cout << n << " " << s << " " << e << " " << w << "\n";

        ll ud = abs(count['N'] - count['S']);
        ll lr = abs(count['E'] - count['W']);

        char arr[N];
        ll komN = min(n, s), komS = komN, remN = n - komN;
        if (n == s)
            komN--, komS--;
        ll RNpabe = komN + remN / 2, HNpabe = n - RNpabe, remS = s - komS, RSpabe = komS + remS / 2, HSpabe = s - RSpabe;

        ll komE = min(e, w), komW = komE, remE = e - komE;
        // if (remE == 0)
        if (e == w)
            komE--, komW--;
        // cout << komE << " " << komW << "\n";
        ll REpabe = komE + remE / 2, HEpabe = e - REpabe, remW = w - komW,
          RWpabe = komW + remW / 2, HWpabe = w - RWpabe;
        //   RWpabe = komW + remW / 2, HWpabe = w - RWpabe;
        // cout << RSpabe << "\n";
        // cout << RNpabe << " " << RSpabe << " " << RWpabe << " " << REpabe << "\n";
        // cout << HNpabe << " " << HSpabe << " " << HWpabe << " " << HEpabe << "\n";
        if (n == 1 && s == 1 && w == 1 && e == 1)
        {
            REpabe = 1, RWpabe = 1, HNpabe = 1, HSpabe = 1;
        }
        for (i = 0; i < N; i++)
        {
            if (a[i] == 'N')
            {

                if (RNpabe > 0)
                {
                    arr[i] = 'R';
                    RNpabe--;
                }
                else
                {
                    arr[i] = 'H';
                    HNpabe--;
                }
            }
            if (a[i] == 'S')
            {
                // if (komS > 0)
                // {
                //     arr[i] = 'R';
                //     komS--;
                // }
                // else
                // {
                if (RSpabe > 0)
                {
                    arr[i] = 'R';
                    RSpabe--;
                }
                else
                {
                    arr[i] = 'H';
                    HSpabe--;
                }
                // }
            }

            if (a[i] == 'E')
            {

                if (REpabe > 0)
                {
                    arr[i] = 'R';
                    REpabe--;
                }
                else
                {
                    arr[i] = 'H';
                    HEpabe--;
                }
                // }
            }
            if (a[i] == 'W')
            {
                // if (komW > 0)
                // {
                //     arr[i] = 'R';
                //     komW--;
                // }
                // else
                // {
                if (RWpabe > 0)
                {
                    arr[i] = 'R';
                    RWpabe--;
                }
                else
                {
                    arr[i] = 'H';
                    HWpabe--;
                }
                // }
            }
        }

        for (i = 0; i < N; i++)
        {
            cout << arr[i] ;
        }
        cout << "\n";
    }
}