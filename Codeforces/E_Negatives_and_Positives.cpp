// https://codeforces.com/contest/1791/problem/E
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long sum = 0, n, i, neg = 0, zero = 0, m = INT_MAX, x;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            m = min(abs(x), m);
            if (x == 0)
                zero++;
            if (x < 0)
                neg++;
            sum += abs(x);
        }
        (neg % 2 != 0 && zero == 0) ? cout << sum - 2 * m : cout << sum;
        cout << endl;
    }
}