#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        360 % (180 - a) ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}