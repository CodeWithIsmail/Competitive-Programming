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

// ll guessReturn(string sub)
// {
//     string s = "11100";
//     if (s.find(sub) != string::npos)
//         return 1;
//     else
//         return 0;
// }

ll query(string s) {
    cout << "? " << s << endl;
    ll response;
    // response=guessReturn(s);
    cin >> response;
    return response;
}

void solve(ll n) {
    string password = "";
    ll temp = 0;
    vector<string>s={"00","01","10","11"};
    string s1 = "00", s2 = "01", s3 = "10", s4 = "11";

    for(auto x:s)
    {
        if(query(x))
        {
            password=x;
            break;
        }
    }

    if (query(cur1)) {
        password = cur1;
    } else if (query(cur2)) {
        password = cur2;
    } else if (query(cur3)) {
        password = cur3;
    } else {
        password = cur4;
    }

    for (int i = password.size(); i < n; ++i) {
        if (behind == 0) {
            // Trying appending 0 or 1 based on queries
            string cur1 = "0" + password;
            string cur2 = "1" + password;

            if (query(cur1)) {
                password = cur1;
            } else if (query(cur2)) {
                password = cur2;
            } else {
                behind = 1;
            }
        }

        if (behind == 1) {
            // One part handled, only need 1 more query to decide final bit
            string c1 = "0" + password;
            string c2 = "1" + password;

            if (query(c1)) {
                password = c1;
            } else {
                password = c2;
            }
        }
    }

    cout << "! " << password << endl;
}

int main() {
    optimize();
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            if (query("1")) {
                cout << "! 1" << endl;
            } else {
                cout << "! 0" << endl;
            }
        } else {
            solve(n);
        }
    }

    return 0;
}