#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, i;
        cin >> n >> k;
        long long a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        priority_queue<long long> count;
        long long temp = 1;
        for (i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] <= k)
                temp++;
            else
            {
                count.push(temp);
                temp = 1;
            }
        }
        count.push(temp);
        cout << n - count.top() << endl;
    }
}