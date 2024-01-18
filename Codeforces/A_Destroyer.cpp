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
        int a[n];
        int count[100] = {0};
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }
        for (i = 1; i < 100; i++)
        {
            if (count[i] > count[i - 1])
            {
                check = 1;
                break;
            }
        }
        check ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}