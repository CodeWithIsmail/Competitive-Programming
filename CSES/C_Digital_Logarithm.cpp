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

ll count(ll mn, ll mx)
{
    if (mn > mx)
        swap(mn, mx);
    ll co = 0;
    while (1)
    {
        co++;
        string temp = to_string(mx);
        mx = temp.length();
        if (mx <= mn)
            break;
    }
    if (mx != mn)
    {
        while (1)
        {
            co++;
            string temp = to_string(mn);
            mn = temp.length();
            if (mx <= mn)
                break;
        }
    }
    return co;
}
int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, ans = 0;
        cin >> n;
        ll a[n], b[n];
        map<ll, ll> counta, countb;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            counta[a[i]]++;
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            countb[b[i]]++;
        }
        vl aa, bb;

        for (i = 0; i < n; i++)
        {
            if (countb[a[i]] == 0)
                aa.pb(a[i]);
            else
                countb[a[i]]--;
        }
        for (i = 0; i < n; i++)
        {
            if (counta[b[i]] == 0)
                bb.pb(b[i]);
            else
                counta[b[i]]--;
        }
        sort(all(aa));
        sort(all(bb));
        for (auto x : aa)
            cout << x << " ";
        cout << "\n";
        for (auto x : bb)
            cout << x << " ";
        cout << "\n";

        map<ll, ll> lena, lenb;
        for (i = 0; i < aa.size(); i++)
        {
            string temp = to_string(aa[i]);
            lena[temp.size()]++;
        }
        for (i = 0; i < bb.size(); i++)
        {
            string temp = to_string(bb[i]);
            lenb[temp.size()]++;
        }

        for (auto x : lena)
            cout << x.first << " " << x.second << "\n";
        cout << "\n\n";
        for (auto x : lenb)
            cout << x.first << " " << x.second << "\n";
        cout << "\n\n";

        // for (i = 0; i < aa.size(); i++)
        // {
        //     ll con = 0;
        //     vl xx, yy;
        //     ll let = aa[i];
        //     while (1)
        //     {
        //         string temp = to_string(let);
        //         ll te1 = temp.length();
        //         xx.pb(te1);
        //         if (te1 == 1)
        //             break;
        //         let = te1;
        //     }
        //     let = bb[i];
        //     while (1)
        //     {
        //         string temp = to_string(let);
        //         ll te1 = temp.length();
        //         yy.pb(te1);
        //         if (te1 == 1)
        //             break;
        //         let = te1;
        //     }
        //     cout << "\n";
        //     for (auto x : xx)
        //         cout << x << " ";
        //     cout << "\n";
        //     for (auto x : yy)
        //         cout << x << " ";
        //     cout << "\n";
        // }

        // cout << "ans " << ans << "\n";
        // map<ll, ll> coa, cob;
        // for (auto x : aa)
        //     coa[x]++;
        // for (auto x : bb)
        //     cob[x]++;

        // for (auto x : coa)
        // {
        //     ans += max(0ll, x.second - cob[x.first]);
        // }
        // for (auto x : cob)
        // {
        //     ans += max(0ll, x.second - coa[x.first]);
        // }
        // cout << "ans " << ans << "\n";
        // ll ans = 0;
        // for (i = 0; i < aa.size(); i++)
        // {
        //     ans += count(aa[i], bb[i]);
        //     //  cout << count(aa[i], bb[i]) << "\n";
        // }
        // cout << ans << "\n";
    }
}