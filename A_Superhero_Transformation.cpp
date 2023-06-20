#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, check = 0;
    string a, b;
    cin >> a >> b;
    if (a.size() == b.size())
    {
        int x[a.size()], y[b.size()];
        for (i = 0; i < a.size(); i++)
        {
            a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ? x[i] = 1 : x[i] = 0;
            b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' ? y[i] = 1 : y[i] = 0;

            if (x[i] != y[i])
                check = 1;
        }
    }
    else
        check = 1;
    check ? cout << "NO" : cout << "YES";
}