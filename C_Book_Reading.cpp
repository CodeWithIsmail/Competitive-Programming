#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, i, ans = 0, temp, rem, total;
        cin >> n >> m;
        total = n / m;
        temp = total / 10;
        rem = total % 10;
        if (m % 10 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if (m % 5 == 0)
                ans = temp * 25;
            else if (m % 2 != 0)
                ans = temp * 45;
            else if (m % 2 == 0)
                ans = temp * 40;
        
        for (i = 1; i <= rem; i++)
            ans += (m * i) % 10;
        cout << ans << endl;
        }
    }
}