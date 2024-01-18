#include <bits/stdc++.h>
using namespace std;
bool solve(string a, string b)
{
    int i, j;
    for (i = 0; i < a.size(); i++)
    {
        for (j = 0; j < a.size(); j++)
        {
            if (a[i] == b[j])
                return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        solve(a, b) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}