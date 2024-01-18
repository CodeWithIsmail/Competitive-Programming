#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl
                 << n << endl;
            for (i = 0; i < n; i++)
                cout << "1 ";
        }
        else
        {
            if (n % 2 == 0)
            {
                if (k > 1)
                {
                    cout << "YES" << endl
                         << n / 2 << endl;
                    for (i = 0; i < n / 2; i++)
                        cout << "2 ";
                }
                else
                    cout << "NO";
            }
            else
            {
                if (k > 2)
                {
                    cout << "YES" << endl
                         << n / 2 << endl;
                    for (i = 0; i < n / 2 - 1; i++)
                        cout << "2 ";
                    cout << "3";
                }
                else
                    cout << "NO";
            }
        }
        cout << endl;
    }
}