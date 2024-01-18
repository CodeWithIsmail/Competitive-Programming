#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, max = 0;
    cin >> n;
    string a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < 7; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[j][i] == '1')
                count++;
        }
        if (count > max)
            max = count;
    }

    cout << max;
}