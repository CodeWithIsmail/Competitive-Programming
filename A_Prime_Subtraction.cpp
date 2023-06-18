#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        x - y == 1 ? cout << "NO" : cout << "YES";
        cout << endl;
    }
}