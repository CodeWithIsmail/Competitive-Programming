#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        priority_queue<long long int> ans;
        for (i = 0; i < n - 1; i++)
            ans.push(a[i] * a[i + 1]);
        cout << ans.top() << endl;
    }
}