#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, k, temp, ans = 0, count;
    cin >> n >> k;
    deque<long long> a;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());

    while (!a.empty())
    {
        ans++;
        count = a.back();
        a.pop_back();
        if (a.empty() == 0 && count + a.front() <= k)
            a.pop_front();
    }
    cout << ans;
}