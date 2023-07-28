#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, count = 0, check = 0;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 != b[i] % 2)
                check = 1;
        }
        check ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}