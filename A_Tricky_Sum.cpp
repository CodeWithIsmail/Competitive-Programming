#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, s = 0, i, temp = 0;
        cin >> n;
        s = (n * (n + 1)) / 2;
        for (i = 1; i <= n; i = i * 2)
            temp += i;
        cout << s - 2 * temp << endl;
    }
}