#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, j, sum = 0, k, a, x = 1;
    cin >> n >> k;

    // sum find
    a = n * (k - 1) + 1;
    sum = (n * (2 * a + (n - 1) * (n - k + 1))) / 2;
    cout << sum << endl;

    // matrix print
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j < k)
            {
                cout << x << " ";
                x++;
            }
            else
            {
                cout << a << " ";
                a++;
            }
        }
        cout << endl;
    }
}