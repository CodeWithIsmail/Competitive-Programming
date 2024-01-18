#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, x, y, count = 0, temp = 0;
    cin >> n;
    vector<pair<int, int>> time;
    for (i = 0; i < n; i++)
    {
        cin >> x >> y;
        time.push_back({y, x});
    }
    sort(time.begin(), time.end());
    for (i = 0; i < n; i++)
    {
        if (time[i].second >= temp)
        {
            temp = time[i].first;
            count++;
        }
    }
    cout << count;
}