#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 1; i < n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                j == i || j == i + 1 ? cout << "1 " : cout << "0 ";
            }
            cout << endl;
        }
        for (i = 1; i <= n; i++)
            i == 1 || i == n ? cout << "1 " : cout << "0 ";
        cout << endl;
    }
}