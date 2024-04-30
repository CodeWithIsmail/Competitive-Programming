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

vector<vector<string>> allComb;
void comb(int n, string a[])
{
    ll i, j, k, l;
    if (n == 1)
        allComb.pb({a[0]});
    if (n == 2)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i != j)
                {
                    vector<string> temp = {a[i], a[j]};
                    allComb.pb(temp);
                }
            }
        }
    }
    if (n == 3)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = 0; k < n; k++)
                {
                    if (i != j && i != k && j != k)
                    {
                        vector<string> temp = {a[i], a[j], a[k]};
                        allComb.pb(temp);
                    }
                }
            }
        }
    }
    if (n == 4)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = 0; k < n; k++)
                {
                    for (l = 0; l < n; l++)
                    {
                        if (i != j && i != k && i != l && j != k && j != l && k != l)
                        {
                            vector<string> temp = {a[i], a[j], a[k], a[l]};
                            allComb.pb(temp);
                        }
                    }
                }
            }
        }
    }
}
bool subseqMat(vector<string> a, ll m, string b[])
{
    ll cur = 0, i;
    for (i = 0; i < m; i++)
    {
        if (b[i] == a[cur])
            cur++;
        if (cur == a.size())
            break;
    }
    return cur == a.size();
}
ll dif(vector<string> a, ll n, string b[])
{
    ll i, j, count = 0;
    string B[n];
    for (i = 0; i < n; i++)
        B[i] = b[i];
    for (i = 0; i < n; i++)
    {
        string need = a[i];
        ll in = -1;
        for (j = 0; j < n; j++)
        {
            if (B[j] == need)
            {
                in = j;
                break;
            }
        }
        if (in > i)
        {
            for (j = in; j > i; j--)
            {
                count++;
                swap(B[j], B[j - 1]);
            }
        }
    }
    return count;
}
int main()
{
    optimize();
    ll n, i, j, p, ans = -1, ind = -1;
    cin >> n;
    string a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    comb(n, a);

    cin >> p;
    for (i = 0; i < p; i++)
    {
        ll m, j;
        cin >> m;
        string b[m];
        for (j = 0; j < m; j++)
            cin >> b[j];

        for (j = 0; j < allComb.size(); j++)
        {
            if (subseqMat(allComb[j], m, b))
            {
                ll x = dif(allComb[j], n, a);
                ll p = (n * (n - 1)) / 2 - x + 1;
                if (p > ans)
                {
                    ans = p;
                    ind = i + 1;
                }
            }
        }
    }
    if (ans == -1)
    {
        cout << "Brand new problem!";
        return 0;
    }
    cout << ind << "\n";
    cout << "[:";
    while (ans--)
        cout << "|";
    cout << ":]";
}