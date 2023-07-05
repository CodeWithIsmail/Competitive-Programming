// https://codeforces.com/problemset/problem/977/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, max = -1;
    cin >> n;
    string a, ans = "";
    cin >> a;
    map<string, int> count;
    for (i = 0; i < n - 1; i++)
    {
        string temp = a.substr(i, 2);
        count[temp]++;
    }
    for (auto x : count)
    {
        if (x.second > max)
        {
            max = x.second;
            ans = x.first;
        }
    }
    cout << ans;
}