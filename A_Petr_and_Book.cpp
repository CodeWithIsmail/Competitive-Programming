#include <bits/stdc++.h>
using namespace std;
int main()
{
    int page, i, per_week = 0, rem;
    cin >> page;
    int day[7];
    for (i = 0; i < 7; i++)
    {
        cin >> day[i];
        per_week += day[i];
    }
    rem = page % per_week;
    if (rem)
    {
        for (i = 1; i < 7; i++)
            day[i] += day[i - 1];
        for (i = 0; i < 7; i++)
        {
            if (day[i] >= rem)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    else
    {
        for (i = 6; i >= 0; i--)
        {
            if (day[i])
            {
                cout << i + 1;
                return 0;
            }
        }
    }
}