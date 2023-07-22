// https://codeforces.com/contest/1709/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, i, damage = 0, a, b;
    cin >> n >> m;
    long long height[n], damageLR[n], damageRL[n];
    damageLR[0] = damageRL[n - 1] = 0;

    for (i = 0; i < n; i++)
        cin >> height[i];

    for (i = 1; i < n; i++)
    {
        if (height[i] < height[i - 1])
            damage += height[i - 1] - height[i];
        damageLR[i] = damage;
    }
    damage = 0;
    for (i = n - 2; i >= 0; i--)
    {
        if (height[i] < height[i + 1])
            damage += height[i + 1] - height[i];
        damageRL[i] = damage;
    }

    while (m--)
    {
        cin >> a >> b;
        a > b ? cout << damageRL[b - 1] - damageRL[a - 1] : cout << damageLR[b - 1] - damageLR[a - 1];
        cout << endl;
    }
}