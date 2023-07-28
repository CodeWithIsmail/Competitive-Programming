#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, i, temp;
        cin >> n >> k;
        long long a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            temp = a[i] / k;
            b[i] = a[i] - temp * k;
        }
        // for (i = 0; i < n; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // cout << endl;
        for (i = 0; i < n; i++)
        {
            if (b[i] <= 0)
                cout << i + 1 << " ";
        }
        vector<pair<long long, long long>> index;

        for (i = 0; i < n; i++)
        {
            if (b[i] > 0)
            {
                index.push_back({b[i], -(i + 1)});
            }
        }
        sort(index.rbegin(), index.rend());

        for (auto m : index)
        {
            cout << abs(m.second) << " ";
        }
        cout << endl;
    }
}