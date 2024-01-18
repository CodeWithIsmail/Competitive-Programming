// https://codeforces.com/contest/641/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j = 0;
    cin >> n;
    string s;
    cin >> s;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        s[j] == '>' ? j += a[j] : j -= a[j];
        if (j < 0 || j >= n)
        {
            cout << "FINITE";
            return 0;
        }
    }
    cout << "INFINITE";
}