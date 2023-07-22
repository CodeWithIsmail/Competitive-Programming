// https://codeforces.com/contest/1472/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, x, one = 0, two = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            x == 1 ? one++ : two++;
        }

        ((two % 2 == 0 && one % 2 == 0) || (one % 2 == 0 && one > 1)) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}