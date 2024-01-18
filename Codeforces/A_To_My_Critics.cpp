#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        a[2] + a[1] < 10 ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}