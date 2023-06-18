#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, i, dif, check = 0, count = 0;
    cin >> n >> k;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    int min = *min_element(a, a + n);
    for (i = 0; i < n; i++)
    {
        dif = a[i] - min;
        if (dif % k)
            check = 1;
        else
            count += dif / k;
    }
    check ? cout << "-1" : cout << count;
}