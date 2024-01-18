#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, k, i, x, ans = 0;
    cin >> n >> m >> k;
    deque<long long> demand, size;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        demand.push_back(x);
    }
    for (i = 0; i < m; i++)
    {
        cin >> x;
        size.push_back(x);
    }
    sort(demand.begin(), demand.end());
    sort(size.begin(), size.end());

    for (i = 0; i < n; i++)
    {
        cout << demand[i] << " ";
    }
    cout << endl;
    for (i = 0; i < m; i++)
    {
        cout << size[i] << " ";
    }
    cout << endl;

    while (demand.empty() == 0 && size.empty() == 0)
    {
        cout << demand.front() << " " << size.front() << endl;
        if (size.front() >= demand.front() - k && size.front() <= demand.front() + k)
        {
            ans++;
            size.pop_front();
            demand.pop_front();
        }
        else
        {
            
        }
            size.pop_front();
    }
    cout << ans;
}