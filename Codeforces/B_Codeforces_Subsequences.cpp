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
    string ans = "codeforces";
    optimize();
    ll k, j, i;
    cin >> k;
    ll n, x, N, X, temp = LONG_MAX;

    if (k < 8)
    {
        for (n = 1; n <= 10; n++)
        {
            for (x = 1;; x++)
            {
                if (powl(x, n) >= k)
                {
                    ll si = 10 - n + n * x;
                    if (si < temp)
                    {
                        X = x, N = n;
                        temp = si;
                    }
                    break;
                }
            }
        }
        string ans = "codeforces";
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < X; j++)
                cout << ans[i];
            N--;
            if (N == 0)
                X = 1;
        }
    }
    else

    {
        for (n = 3; n <= 10; n++)
        {
            for (x = 2;; x++)
            {
                if (powl(x, n) >= k)
                {
                    ll si = 10 - n + n * x;
                    if (si < temp)
                    {
                        X = x, N = n;
                        temp = si;
                    }
                    break;
                }
            }
        }
      //  cout << N << " " << X << " ";
        ll p = -1, q = -1;
        if (powl(X, N) > k)
        {
            //    cout<<"1";
            for (i = 1; i <= 10; i++)
            {
                ll rem = 10 - i;
                ll got = powl(X, i) * powl(X - 1, rem);

                //   cout << got << "\n";
                if (got >= k)
                {
                    ll te = i * X + rem * (X - 1);
                    //      cout << te << " ";
                    if (te < temp)
                    {
                        p = i;
                        q = X;
                        temp = te;
                    }
                }
            }

            if (p != -1)
            {
                string ans = "codeforces";
                for (i = 0; i < p; i++)
                {
                    for (j = 0; j < q; j++)
                        cout << ans[i];
                }

                for (i = p; i < 10; i++)
                {
                    for (j = 0; j < q - 1; j++)
                        cout << ans[i];
                }
            }
            else
            {
                string ans = "codeforces";
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < X; j++)
                        cout << ans[i];
                    N--;
                    if (N == 0)
                        X = 1;
                }
            }
        }
        else
        {
            string ans = "codeforces";
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < X; j++)
                    cout << ans[i];
                N--;
                if (N == 0)
                    X = 1;
            }
        }
    }
    // cout << p << " " << q << "\n";
    // cout<<temp<<" ";
    // cout << N << " " << X << "\n";
}