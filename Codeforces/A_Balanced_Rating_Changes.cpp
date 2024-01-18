#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, odd = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (abs(a[i]) % 2)
            odd++;
    }
    odd /= 2;
    for (i = 0; i < n; i++)
    {

        if (abs(a[i]) % 2)
        {
            if (odd)
            {
                a[i] < 0 ? cout << a[i] / 2 : cout << (a[i] + 1) / 2;
                odd--;
            }
            else
                a[i] < 0 ? cout << "-" << (abs(a[i]) + 1) / 2 : cout << a[i] / 2;
        }
        else
            cout << a[i] / 2;
        cout << endl;
    }
}