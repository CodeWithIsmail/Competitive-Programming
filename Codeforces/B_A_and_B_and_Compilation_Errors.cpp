#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n], b[n - 1], c[n - 2];
    long long int s = 0, s1 = 0, s2 = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        s1 += b[i];
    }
    for (i = 0; i < n - 2; i++)
    {
        cin >> c[i];
        s2 += c[i];
    }
    cout << s - s1 << endl
         << s1 - s2;
}