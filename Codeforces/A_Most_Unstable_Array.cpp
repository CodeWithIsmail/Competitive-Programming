#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        if (n == 1) cout << "0";
        else if (n == 2) cout << m;
        else cout << 2 * m;
        cout << endl;
    }
}