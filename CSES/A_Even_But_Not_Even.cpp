#include <bits/stdc++.h>
using namespace std;
int sum(string a)
{
    int i, s = 0;
    for (i = 0; i < a.size(); i++)
        s += a[i] - 48;
    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, s = 0;
        cin >> n;
        string a;
        cin >> a;
        if ((a.back() - 48) % 2)
        {
            if (sum(a) % 2 == 0)
                cout << a;
            else
            {
                for (i = 0; i < n; i++)
                {
                    if (a[i] == '0')
                        a[i] = '-';
                }
                for (i = 0; i < n; i++)
                {
                    if ((a[i] - 48) % 2 != 0)
                    {
                        a[i] = '-';
                        break;
                    }
                }
                for (i = 0; i < n; i++)
                {
                    if (a[i] != '-')
                        cout << a[i];
                }
            }
        }
        else
        {
            while (a.empty() == 0 && (a.back() - 48) % 2 == 0)
            {
                a.pop_back();
            }
            if (a.empty() == 1)
            {
                cout << -1 << endl;
                continue;
                        }
            if (sum(a) % 2 == 0)
                cout << a;
            else
            {
                for (i = 0; i < a.size(); i++)
                {
                    if (a[i] == '0')
                        a[i] = '-';
                }
                for (i = 0; i < a.size(); i++)
                {
                    if ((a[i] - 48) % 2 != 0)
                    {
                        a[i] = '-';
                        break;
                    }
                }
                int c = 0;
                for (i = 0; i < a.size(); i++)
                {
                    if (a[i] != '-')
                    {
                        cout << a[i];
                        c = 1;
                    }
                }
                if (!c)
                    cout << -1;
            }
        }
        cout << endl;
    }
}