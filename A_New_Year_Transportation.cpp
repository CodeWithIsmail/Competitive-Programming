#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, pos = 1;
    cin >> n >> t;
    int a[n - 1];
    for (i = 0; i < n - 1; i++)
        cin >> a[i];
    do
    {
        pos += a[pos - 1];
        if (pos == t)
        {
            cout << "YES";
            return 0;
        }
    } while (pos < n);
    cout << "NO";
}