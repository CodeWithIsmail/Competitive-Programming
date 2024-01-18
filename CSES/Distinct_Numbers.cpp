#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    priority_queue<int> ans;
    ans.push(a[0]);
    for (i = 1; i < n; i++)
    {
        if (a[i] != ans.top())
        {
            ans.push(a[i]);
        }
    }
    cout << ans.size();
}