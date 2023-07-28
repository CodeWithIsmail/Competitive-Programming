#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, check = 0;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        if (a[0] == a[n - 1])
        {
            int count = 0;
            for (i = 0; i < n; i++)
            {
                if (a[i] == a[0])
                    count++;
            }
            if (count >= k)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        int count_a = 0, count_b = 0, last_a, last_b;
        for (i = 0; i < n; i++)
        {
            if (a[i] == a[0])
                count_a++;
            if (count_a == k)
            {
                last_a = i;
                break;
            }
        }
        for (i = n - 1; i > last_a; i--)
        {
            if (a[i] == a[n - 1])
                count_b++;
            if (count_b == k)
            {
                break;
            }
        }
        (count_a == k && count_b == k) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}