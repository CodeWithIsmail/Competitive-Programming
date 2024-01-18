#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, d, temp1, temp2;
        cin >> l >> r >> d;
        temp1 = (l + d - 1) / d;
        temp2 = r / d;
        temp1 > 1 ? cout << d : cout << (temp2 + 1) * d;
        cout << endl;
    }
}