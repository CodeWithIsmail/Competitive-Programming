#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i, sum = 0, c = 0, count = 0;
        cin >> n;
        long long a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] < 0 && c == 0)
            {
                count++;
                c = 1;
            }
            else if (a[i] > 0)
                c = 0;
        }
        cout << sum << " " << count << endl;
    }
}