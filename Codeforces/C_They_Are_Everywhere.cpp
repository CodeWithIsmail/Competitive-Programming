#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, i, ans = LONG_LONG_MAX, last = -1, first = -1;
    string a;
    cin >> n >> a;
    map<char, bool> check;
    for (i = 0; i < n; i++)
    {
        if (!check[a[i]])
        {
            check[a[i]] = true;
            last = i;
        }
    }
    check.clear();
    for (i = last; i >= 0; i--)
    {
        if (!check[a[i]])
        {
            check[a[i]] = true;
            first = i;
        }
    }
    cout << first << " " << last << "\n";
    cout << last - first + 1;
}