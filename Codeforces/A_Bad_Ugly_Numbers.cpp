// https://codeforces.com/problemset/problem/1326/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (i = 1; i < n; i++)
            cout << 3;
        cout << 4 << endl;
    }
}