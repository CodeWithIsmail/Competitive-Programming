#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, m, i;
    cin >> n;
    int time[24 * 60] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> h >> m;
        time[60 * h + m]++;
    }
    sort(time, time + 60 * 24);
    cout << time[60 * 24 - 1];
}