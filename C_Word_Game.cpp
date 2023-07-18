// https://codeforces.com/contest/1722/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, ans, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<string, int> count;
        string a[3][n];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> a[i][j];
                count[a[i][j]]++;
            }
        }
        for (i = 0; i < 3; i++)
        {
            ans = 0;
            for (j = 0; j < n; j++)
            {
                if (count[a[i][j]] == 1)
                    ans += 3;
                else if (count[a[i][j]] == 2)
                    ans++;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}