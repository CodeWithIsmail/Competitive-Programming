#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, r, s, i;
    string a;
    cin >> a;
    s = a.size();
    int value[s] = {0};
    for (i = 0; i < s - 1; i++)
    {
        if (a[i] == a[i + 1])
            value[i + 1] += value[i] + 1;
        else
            value[i + 1] += value[i];
    }
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        cout << value[r - 1] - value[l - 1] << endl;
    }
}