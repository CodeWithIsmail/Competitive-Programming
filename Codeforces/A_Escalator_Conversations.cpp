#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, m, k, h, dif, count = 0;
        cin >> n >> m >> k >> h;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            dif = abs(a[i] - h);
            if (dif != 0 && dif % k == 0 && dif / k + 1 <= m)
                count++;
        }
        cout << count << endl;
    }
}