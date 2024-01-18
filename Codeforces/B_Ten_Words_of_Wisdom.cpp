#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0, ans = -1, i;
        cin >> n;
        int a[n][2];
        for (i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1];
            if (a[i][0] <= 10)
            {
                if (a[i][1] > m)
                {
                    m = max(m, a[i][1]);
                    ans = i + 1;
                }
            }
        }
        cout << ans << endl;
    }
}