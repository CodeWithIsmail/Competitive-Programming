#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, j, count = 0;
    string g, p;
    cin >> g >> p;
    if (p.size() > g.size())
    {
        cout << 0;
        return 0;
    }
    for (i = 0; i <= g.size() - p.size(); i++)
    {
        string a = g.substr(i, p.size());
        if (a == p)
        {
            count++;
            i = i + p.size() - 1;
        }
    }
    cout << count;
}