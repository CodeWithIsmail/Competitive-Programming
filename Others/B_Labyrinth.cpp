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

vector<vector<vpl>> adList;
vector<vector<bool>> vis;
vector<vector<char>> direction;
vector<vector<ll>> dis;
vector<vector<pll>> parent;
pll start, en;

void bfs()
{
    queue<pll> q;
    q.push(start);
    vis[start.first][start.second] = true;
    direction[start.first][start.second] = 'X';
    parent[start.first][start.second] = {-1, -1};
    dis[start.first][start.second] = 0;
    while (!q.empty())
    {
        pll current = q.front();
        q.pop();
        for (auto x : adList[current.first][current.second])
        {
            if (!vis[x.first][x.second])
            {
                q.push(x);
                vis[x.first][x.second] = true;
                dis[x.first][x.second] = dis[current.first][current.second] + 1;
                parent[x.first][x.second] = current;

                if (x.first == current.first + 1 && x.second == current.second)
                    direction[x.first][x.second] = 'D';
                if (x.first == current.first - 1 && x.second == current.second)
                    direction[x.first][x.second] = 'U';
                if (x.second == current.second + 1 && x.first == current.first)
                    direction[x.first][x.second] = 'R';
                if (x.second == current.second - 1 && x.first == current.first)
                    direction[x.first][x.second] = 'L';
            }
            if (vis[en.first][en.second])
                break;
        }
        if (vis[en.first][en.second])
            break;
    }
}
void path(pll p)
{
    if (direction[p.first][p.second] == 'X')
        return;
    path(parent[p.first][p.second]);
    cout << direction[p.first][p.second];
}
int main()
{
    optimize();
    ll n, m, i, j;
    cin >> n >> m;
    vector<string> a;
    vis.assign(n, vector<bool>(m, false));
    direction.assign(n, vector<char>(m, '\0'));
    dis.assign(n, vector<ll>(m, infLL));
    parent.assign(n, vector<pll>(m, {-1, -1}));
    adList.assign(n, vector<vpl>(m, vpl()));
    for (i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        a.pb(temp);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            pll p = {i, j};
            if (a[i][j] != '#')
            {
                if (i - 1 >= 0 && a[i - 1][j] != '#')
                    adList[i][j].pb({i - 1, j});
                if (i + 1 < n && a[i + 1][j] != '#')
                    adList[i][j].pb({i + 1, j});
                if (j - 1 >= 0 && a[i][j - 1] != '#')
                    adList[i][j].pb({i, j - 1});
                if (j + 1 < m && a[i][j + 1] != '#')
                    adList[i][j].pb({i, j + 1});
            }
            if (a[i][j] == 'A')
                start = p;
            if (a[i][j] == 'B')
                en = p;
        }
    }
    bfs();
    if (vis[en.first][en.second])
    {
        cout << "YES\n"
             << dis[en.first][en.second] << "\n";
        path(en);
    }
    else
        cout << "NO";
}
