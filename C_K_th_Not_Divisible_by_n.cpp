#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long int n, k; cin >> n >> k;
        long long int div = k / (n - 1), rem = k % (n - 1);
        if (rem) cout << div * n + rem << endl;
        else cout << div * n - 1 << endl;
    }
}