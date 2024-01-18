// https://codeforces.com/problemset/problem/1619/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> numbers;
    map<int, bool> check;
    int i, mx = 1e9;
    for (i = 1; i * i <= mx; i++)
    {
        if (!check[i * i])
        {
            numbers.push_back(i * i);
            check[i * i] = true;
        }
    }
    for (i = 1; i * i * i <= mx; i++)
    {
        if (!check[i * i * i])
        {
            numbers.push_back(i * i * i);
            check[i * i * i] = true;
        }
    }
    sort(numbers.begin(), numbers.end());

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << upper_bound(numbers.begin(), numbers.end(), n) - numbers.begin() << endl;
    }
}