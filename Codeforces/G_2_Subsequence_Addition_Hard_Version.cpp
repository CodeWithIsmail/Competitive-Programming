#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, check = 0;
        cin >> n;
        long long int a[n], b[n] = {0};

        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        b[0] = a[0];

        for (i = 1; i < n; i++)
        {
            b[i] = a[i] + b[i - 1];
        }
        for (i = 1; i < n; i++)
        {
            if (b[i - 1] < a[i])
                check = 1;
        }
        if (a[0] > 1)
            check = 1;
        check ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}