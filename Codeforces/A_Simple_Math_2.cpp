#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    long long t = powl(10, n);
    long long ans = t / m;
    long long res = ans % m;
    cout << res;
}