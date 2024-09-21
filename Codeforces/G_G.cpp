
// #include <bits/stdc++.h>
// using namespace std;

// // Data Type:
// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// typedef pair<int, int> pii;
// typedef pair<double, double> pdd;
// typedef pair<ll, ll> pll;
// typedef vector<pii> vpi;
// typedef vector<pll> vpl;

// // Shortcut:
// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define min4(a, b, c, d) min(a, min(b, min(c, d)))
// #define max4(a, b, c, d) max(a, max(b, max(c, d)))
// #define pb push_back
// #define all(a) (a).begin(), (a).end()
// #define rall(a) (a).rbegin(), (a).rend()
// #define sz(x) (int)x.size()
// #define mem(a, b) memset(a, b, sizeof(a))
// #define sqr(a) ((a) * (a))
// ll gcd(ll a, ll b) { return __gcd(a, b); }
// ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
// #define YES printf("YES");
// #define Yes printf("Yes");
// #define NO printf("NO");
// #define No printf("No");

// // Const value:
// const double PI = acos(-1);
// const double eps = 1e-9;
// const int inf = 2000000000;
// const ll infLL = 9000000000000000000;
// #define MOD 1000000007

// // Optimize cin cout:
// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// // Fraction:
// #define fraction()                \
//     cout.unsetf(ios::floatfield); \
//     cout.precision(10);           \
//     cout.setf(ios::fixed, ios::floatfield);

// int main()
// {
//     optimize();

// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> forest(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> forest[i];
    }

    vector<int> left_to_right(n, 0), right_to_left(n, 0);

    // Left-to-right pass
    left_to_right[0] = 1;
    for (int i = 1; i < n; ++i) {
        if (forest[i] > forest[i - 1]) {
            left_to_right[i] = left_to_right[i - 1] + 1;
        } else if (forest[i] == forest[i - 1]) {
            left_to_right[i] = left_to_right[i - 1];
        } else {
            left_to_right[i] = max(1, left_to_right[i - 1] - 1);
        }
    }

    // Right-to-left pass
    right_to_left[n - 1] = 1;
    for (int i = n - 2; i >= 0; --i) {
        if (forest[i] > forest[i + 1]) {
            right_to_left[i] = right_to_left[i + 1] + 1;
        } else if (forest[i] == forest[i + 1]) {
            right_to_left[i] = right_to_left[i + 1];
        } else {
            right_to_left[i] = max(1, right_to_left[i + 1] - 1);
        }
    }

    // Final result for each forest
    for (int i = 0; i < n; ++i) {
        cout << max(left_to_right[i], right_to_left[i]) << " ";
    }
    cout << endl;

    return 0;
}

