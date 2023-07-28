#include <bits/stdc++.h>
using namespace std;
long long power(long long k, long long n)
{
    long long ans = 1, i;
    for (i = 1; i <= n; i++)
        ans *= k;
    return ans;
}
long long check(long long n, long long target)
{
    long long i = 1;
    while (power(n, i) <= target)
    {
        if (power(n, i) == target)
            return i;
        i++;
    }
    return -1;
}
int main()
{
    long long k, n;
    cin >> k >> n;
    long long ans2 = check(k, n);
    ans2 != -1 ? cout << "YES" << endl
                      << ans2 - 1
               : cout << "NO";
}