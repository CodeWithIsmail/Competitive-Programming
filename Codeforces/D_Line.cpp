// https://codeforces.com/contest/1722/problem/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long i, n, value = 0;
        cin >> n;
        string a;
        cin >> a;
        long long count[n], maxCount[n], difCount[n];

        for (i = 0; i < n; i++)
        {
            a[i] == 'L' ? count[i] = i : count[i] = n - i - 1;
            value += count[i];
            maxCount[i] = max(i, n - i - 1);
            difCount[i] = abs(count[i] - maxCount[i]);
        }

        sort(difCount, difCount + n);
        for (i = 0; i < n; i++)
        {
            value += difCount[n - 1 - i];
            cout << value << " ";
        }
        cout << endl;
    }
}