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

const ll mx = 200000 + 5;
map<ll, bool> vis, ignore;
ll n;
ll coun = 0, dead = 0;
vector<set<ll>> dfs(vector<set<ll>> adList, ll current)
{
    // cout << current << " ";
    vis[current] = true;
    // if (current == 2)
    // {
    //     cout << "adlist of 2: ";
    //     for (auto x : adList[current])
    //         cout << x << " ";
    //     cout << "\n";
    // }

    if (adList[current].size() == 0)
    {
        // cout << "survived: " << current << " ";
        coun++;
        // return;
    }
    else
    {
        ll fr = *adList[current].begin();
        if (fr > current)
        {
            cout << "dead: " << current << "\n";
            dead++;
            // cout << adList[current].size() << " ";
            adList[current].clear();
            // cout << adList[current].size() << " ";
            // for (auto x : adList[current])
            // {
            //     cout<<x<<" ";
            // }
            for (ll z = 1; z <= n; z++)
            {
                if (adList[z].count(current) > 0)
                    adList[z].erase(current);
            }
            // cout << adList[2].size() << " ";
            // cout << "adlist of 2: ";
            // for (auto x : adList[current])
            //     cout << x << " ";
            // cout << "\n";
        }
        else
        {
            // cout << current << " ";
            ll tem = 0;
            for (auto x : adList[current])
            {
                if (!vis[x])
                {
                    vis[x] = true;
                    dfs(adList, x);
                    tem++;
                }
            }
            if (tem == 0)
                coun++;
        }
    }
    return adList;
    // cout << "-1\n";
}
void solve(vector<set<ll>> adList)
{
    vector<set<ll>> templist = adList;
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
            templist = dfs(templist, i);
        // cout << "\n";
    }
    cout << n - dead << "\n";
    coun = 0;
    dead = 0;
    vis.clear();
}
int main()
{
    optimize();
    ll m, i, j, q;
    cin >> n >> m;
    vector<set<ll>> adList(n + 1);
    for (i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adList[u].insert(v);
        adList[v].insert(u);
    }
    cin >> q;
    while (q--)
    {
        ll type;
        cin >> type;
        if (type == 3)
        {
            // cout<<"1";
            solve(adList);
        }
        else
        {
            ll u, v;
            cin >> u >> v;
            if (type == 1)
            {
                adList[u].insert(v);
                adList[v].insert(u);
            }
            else
            {
                adList[u].erase(v);
                adList[v].erase(u);
            }
        }
    }
}