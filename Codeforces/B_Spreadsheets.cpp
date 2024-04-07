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

int ston(string a)
{
    int current = 1, ans = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        ans += current * (a[i] - 'A' + 1);
        current *= 26;
    }
    return ans;
}
int main()
{
    optimize();
    string ntos[1389206];
    int count = 0;
    for (char a = 'A'; a <= 'Z'; a++)
    {
        string temp = "";
        temp.pb(a);
        ntos[count] = temp;
        count++;
    }
    for (char a = 'A'; a <= 'Z'; a++)
    {
        for (char b = 'A'; b <= 'Z'; b++)
        {
            string temp = "";
            temp.pb(a), temp.pb(b);
            ntos[count] = temp;
            count++;
        }
    }
    for (char a = 'A'; a <= 'Z'; a++)
    {
        for (char b = 'A'; b <= 'Z'; b++)
        {
            for (char c = 'A'; c <= 'Z'; c++)
            {
                string temp = "";
                temp.pb(a), temp.pb(b), temp.pb(c);
                ntos[count] = temp;
                count++;
            }
        }
    }
    for (char a = 'A'; a <= 'Z'; a++)
    {
        for (char b = 'A'; b <= 'Z'; b++)
        {
            for (char c = 'A'; c <= 'Z'; c++)
            {
                for (char d = 'A'; d <= 'Z'; d++)
                {
                    string temp = "";
                    temp.pb(a), temp.pb(b), temp.pb(c), temp.pb(d);
                    ntos[count] = temp;
                    count++;
                }
            }
        }
    }
    for (char a = 'A'; a <= 'B'; a++)
    {
        for (char b = 'A'; b <= 'Z'; b++)
        {
            for (char c = 'A'; c <= 'Z'; c++)
            {
                for (char d = 'A'; d <= 'Z'; d++)
                {
                    for (char e = 'A'; e <= 'Z'; e++)
                    {
                        string temp = "";
                        temp.pb(a), temp.pb(b), temp.pb(c), temp.pb(d), temp.pb(e);
                        ntos[count] = temp;
                        count++;
                    }
                }
            }
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int i, type = 1;
        string colstr = "", rowstr = "";
        for (i = 0; i < a.size(); i++)
        {
            if (a[i] < 'A')
                break;
            colstr.pb(a[i]);
        }
        rowstr = a.substr(i);
        bool checkrow = true;
        for (auto x : rowstr)
        {
            if (x > '9')
            {
                checkrow = false;
                break;
            }
        }
        if (colstr.size() && checkrow)
            type = 2;

        if (type == 1)
        {
            colstr = "", rowstr = "";
            for (i = 1; i < a.size(); i++)
            {
                if (a[i] == 'C')
                    break;
                rowstr.pb(a[i]);
            }
            colstr = a.substr(i + 1);
            cout << ntos[stoi(colstr) - 1] << rowstr << "\n";
        }
        else
        {
            cout << "R" << rowstr << "C" << ston(colstr) << "\n";
        }
    }
}