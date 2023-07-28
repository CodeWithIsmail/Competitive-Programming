// https://codeforces.com/problemset/problem/779/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k, ans = 0;
    cin >> n >> k;
    int before[n], after[n];
    vector<pair<int, pair<int, int>>> price;

    for (i = 0; i < n; i++)
        cin >> before[i];
    for (i = 0; i < n; i++)
        cin >> after[i];

    for (i = 0; i < n; i++)
        price.push_back({before[i] - after[i], {before[i], after[i]}});
    sort(price.begin(), price.end());

    for (i = 0; i < n; i++)
    {
        i < k ? ans += price[i].second.first
              : ans += min(price[i].second.first, price[i].second.second);
    }
    cout << ans;
}