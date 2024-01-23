#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        if (n == 3)
            cout << "3 2 1";
        else
        {
            ll st = 1;
            for (i = 1; i <= n; i++)
            {
                if (i == 1)
                    cout << n;
                else if (i == 2)
                    cout << n - 3;
                else if (i == n - 1)
                    cout << n - 2;
                else if (i == n)
                    cout << n - 1;
                else
                    cout << i - 2;
                cout << " ";
            }
        }
        cout << "\n";
    }
}
