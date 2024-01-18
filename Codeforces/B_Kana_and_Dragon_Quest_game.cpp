#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, n, m;
        cin >> h >> n >> m;
        while ((n > 0 || m > 0) && h > 0)
        {
            if (h / 2 + 10 < h)
            {
                if (n > 0)
                {
                    h = h / 2 + 10;
                    n--;
                }
                else
                {
                    h -= 10;
                    m--;
                }
            }
            else
            {
                if (m > 0)
                {
                    h -= 10;
                    m--;
                }
                else
                {
                    h = h / 2 + 10;
                    n--;
                }
            }
        }

        h > 0 ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}