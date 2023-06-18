#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q, n, i, s;
    cin >> q;
    while (q--)
    {
        s = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= 2048)
                s += a[i];
        }
        s < 2048 ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}