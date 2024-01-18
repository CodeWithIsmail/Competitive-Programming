#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i;
    cin >> n >> m;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = (a[i] + m - 1) / m;
    }
    int pos = 1, max = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            pos = i + 1;
            max = a[i];
        }
    }
    cout << pos;
}