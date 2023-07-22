// https://codeforces.com/contest/1679/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, Min, Max;
        cin >> n;
        Max = n / 4;
        if (n % 4 == 2 && n / 4 == 0 || n % 4 != 0 && n % 4 != 2)
        {
            cout << -1 << endl;
            continue;
        }

        Min = n / 6;

        if ((n % 6 == 4 || n % 6 == 2) && n / 6 > 0)
            Min++;
        else if (n % 6 != 0)
            Min = Max;
        cout << Min << " " << Max << endl;
    }
}