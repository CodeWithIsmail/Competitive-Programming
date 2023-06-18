#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, j, check;
    cin >> t;
    while (t--)
    {
        check = 0;
        long long int n, i, temp, temp2;
        cin >> n;
        temp2 = n;
        for (;;)
        {
            i = temp2;
            check = 0;
            while (i)
            {
                temp = i % 10;
                if (temp > 0 && temp2 % temp > 0)
                {
                    check = 1;
                    break;
                }
                i /= 10;
            }
            if (!check)
            {
                cout << temp2 << endl;
                break;
            }
            else
                temp2++;
        }
    }
}