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
#define YES printf("YES\n");
#define Yes printf("Yes");
#define NO printf("NO\n");
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
        ll n, m, i, j;
        cin >> n >> m;
        ll a[n][m], b[n][m];

        for (i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            for (j = 0; j < m; j++)
            {
                a[i][j] = temp[j] - '0';
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        for (i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            for (j = 0; j < m; j++)
                b[i][j] = temp[j] - '0';
        }

        for (i = n - 1; i > 0; i--)
        {
            for (j = m - 1; j > 0; j--)
            {
                if (a[i][j] != b[i][j])
                {
                    ll target = (b[i][j] - a[i][j] + 3) % 3;
                    a[i][j] = b[i][j];
                    a[i - 1][j - 1] = (a[i - 1][j - 1] + target) % 3;
                    a[i - 1][j] = (target + a[i - 1][j] + target) % 3;
                    a[i][j - 1] = (target + a[i][j - 1] + target) % 3;
                }
            }
        }
        bool check = true;

        for (i = 0; i < n; i++)
        {
            if (a[i][0] != b[i][0])

            {
                check = false;
                break;
            }
        }
        for (i = 0; i < m; j++)
        {
            if (a[0][j] != b[0][j])
            {
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << "YES\n";
        }
        else
            cout << "NO";
        cout << "\n";
    }
}

// #include <iostream>
// #include <vector>
// using namespace std;

// bool canTransform(vector<vector<int>> &gridA, vector<vector<int>> &gridB, int rows, int cols)
// {
//     for (int row = rows - 1; row >= 1; --row)
//     {
//         for (int col = cols - 1; col >= 1; --col)
//         {
//             if (gridA[row][col] != gridB[row][col])
//             {
//                 int diff = (gridB[row][col] - gridA[row][col] + 3) % 3;
//                 gridA[row][col] = gridB[row][col];
//                 gridA[row - 1][col] = (gridA[row - 1][col] + 2 * diff) % 3;
//                 gridA[row][col - 1] = (gridA[row][col - 1] + 2 * diff) % 3;
//                 gridA[row - 1][col - 1] = (gridA[row - 1][col - 1] + diff) % 3;
//             }
//         }
//     }
//     for (int row = 0; row < rows; ++row)
//     {
//         if (gridA[row][0] != gridB[row][0])
//             return false;
//     }
//     for (int col = 0; col < cols; ++col)
//     {
//         if (gridA[0][col] != gridB[0][col])
//             return false;
//     }
//     return true;
// }
