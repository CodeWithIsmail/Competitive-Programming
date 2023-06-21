#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j, count = 0, x, y;
    cin >> m >> n;
    string a[m];
    for (i = 0; i < m; i++)
        cin >> a[i];
    if (m < 2 || n < 2)
        cout << 0;
    else
    {
        for (i = 0; i <= m - 2; i++)
        {
            for (j = 0; j <= n - 2; j++)
            {
                string s;
                s.push_back(a[i][j]);
                s.push_back(a[i + 1][j]);
                s.push_back(a[i][j + 1]);
                s.push_back(a[i + 1][j + 1]);
                sort(s.begin(), s.end());
                // cout << s << endl;
                if (s == "acef")
                    count++;
            }
        }
        cout << count;
    }
}