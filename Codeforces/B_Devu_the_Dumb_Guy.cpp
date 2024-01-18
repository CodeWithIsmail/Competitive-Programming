#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int time = 0, n, x, i;
    cin >> n >> x;
    long long int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
        time += a[i] * x;
        if (x > 1)
            x--;
    }
    cout << time;
}