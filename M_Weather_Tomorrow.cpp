#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, dif;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    dif = a[1] - a[0];
    for (i = 1; i < n - 1; i++)
    {
        if (dif != a[i + 1] - a[i])
        {
            cout << a[n - 1];
            return 0;
        }
    }
    cout << a[n - 1] + dif;
}