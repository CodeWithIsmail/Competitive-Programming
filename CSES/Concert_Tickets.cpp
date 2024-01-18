#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, i, x;
    cin >> n >> m;
    long long customer[m];
    vector<long long> price;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        price.push_back(x);
    }
    for (i = 0; i < m; i++)
        cin >> customer[i];
    sort(price.begin(), price.end());

    for (i = 0; i < m; i++)
    {
        long long index = lower_bound(price.begin(), price.end(), customer[i]) - price.begin();
        cout<<index<<" ";
        if (index >= n)
        {
            if (price.size() == 0)
            {
                cout << "-1";
            }
            else
            {
                cout << price[index - 1];
                price.erase(price.begin() + index - 1);
            }
        }
        else if (price[index] > customer[i])
        {
            if (index == 0)
                cout << "-1";
            else
            {
                cout << price[index - 1];
                price.erase(price.begin() + index - 1);
            }
        }
        else if (price[index] <= customer[i])
        {
            cout << price[index];
            price.erase(price.begin() + index);
        }
        cout << endl;
    }
}