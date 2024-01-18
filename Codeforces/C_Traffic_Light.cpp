// https://codeforces.com/contest/1744/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, currentG, ans = 0, temp;
        cin >> n;
        char x;
        cin >> x;
        string a;
        cin >> a;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 'g')
            {
                currentG = i;
                break;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] == 'g')
                currentG = i;
            else if (a[i] == x)
            {
                i > currentG ? temp = n - i + currentG : temp = currentG - i;
                ans = max(ans, temp);
            }
        }
        cout << ans << endl;
    }
}