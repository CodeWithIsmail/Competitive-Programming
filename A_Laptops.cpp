#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, price, quality;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> price >> quality;
        a[i] = quality / price;
    }
    sort(a, a + n);
    if (a[0] != a[n - 1])
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
}