#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, time, i, temp = 0, pos = -1;
        cin >> n >> time;
        int a[n], b[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];

        for (i = 0; i < n; i++)
        {
            if (a[i] <= time && b[i] > temp)
            {
                temp = b[i];
                pos = i + 1;
            }
            time--;
        }
        cout << pos << endl;
    }
}