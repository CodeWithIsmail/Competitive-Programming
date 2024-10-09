///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

/*
sample problem:
https://cses.fi/problemset/task/1713

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const ll mx = 1e7 + 12;
ll number_of_divisor[mx];
int main()
{
    optimize();
    ll i, j, n, sum = 0;
    for (i = 1; i <= mx; i++)
    {
        for (j = i; j <= mx; j += i)
        {
            number_of_divisor[j]++;
        }
    }

    cin >> n;
    for (i = 1; i <= n; i++)
        sum += i * number_of_divisor[i];

    cout << sum;
}