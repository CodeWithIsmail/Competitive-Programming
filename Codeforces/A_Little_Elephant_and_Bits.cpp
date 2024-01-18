#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, check = 0;
    string a;
    cin >> a;
    for (i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == '0' & check == 0)
        {
            check = 1;
            continue;
        }
        if (a[i] == '1')
            cout << a[i];
        else
        {
            if (check)
                cout << a[i];
        }
    }
    if (check)
        cout << a[a.size() - 1];
}