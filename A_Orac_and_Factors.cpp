#include <bits/stdc++.h>
using namespace std;
int find_first_div(long long int n)
{
    long long int i;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return i;
    return n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        cout << n + find_first_div(n) + (k - 1) * 2 << endl;
    }
}