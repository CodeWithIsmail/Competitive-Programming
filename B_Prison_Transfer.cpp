#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t, c, i, x, count = 0;
    cin >> n >> t >> c;
    vector<long long> index;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x <= t)
            index.push_back(i);
    }
    if (index.size())
    {
        for (i = 0; i <= index.size() - c; i++)
        {
            if (index[i + c - 1] == index[i] + c - 1)
                count++;
        }
    }
    cout << count;
}