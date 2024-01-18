#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, duration, deadline, reward = 0;
    cin >> n;
    vector<pair<long long, long long>> time;

    for (i = 0; i < n; i++)
    {
        cin >> duration >> deadline;
        time.push_back({duration, deadline});
    }

    sort(time.begin(), time.end());
    for (i = 1; i < n; i++)
        time[i].first += time[i - 1].first;

    for (auto x : time)
        reward += x.second - x.first;
    cout << reward;
}