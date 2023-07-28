#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, ans = INT_MAX, check = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n - 1; i++)
        {
            if (a[i + 1] < a[i])
            {
                cout << 0 << endl;
                check = 1;
                break;
            }
        }
        if (!check)
        {
            for (i = 0; i < n - 1; i++)
            {
                int temp = (a[i + 1] - a[i]) / 2 + 1;
                ans = min(ans, temp);
            }
            cout << ans << endl;
        }
    }
}