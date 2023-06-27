#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (k < n)
            k *= (n + k - 1) / k;
        cout << (n + k - 1) / n << endl;
    }
}