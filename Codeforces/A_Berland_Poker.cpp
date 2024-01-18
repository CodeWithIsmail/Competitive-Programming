// https://codeforces.com/contest/1359/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int perPerson = n / k;
        m / perPerson == 0 ? cout << m : cout << perPerson - (m - perPerson + k - 2) / (k - 1);
        cout << endl;
    }
}