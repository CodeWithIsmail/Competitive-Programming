///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

/*

sample problem:
https://cses.fi/problemset/task/1713
https://atcoder.jp/contests/abc172/tasks/abc172_d

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int mx = 1e6 + 12;
int number_of_divisor[mx];
vector<int> divisors[mx];
int main()
{
    optimize();
    ll i, j;
    for (i = 1; i <= 1e6; i++)
    {
        for (j = i; j <= 1e6; j += i)
        {
            number_of_divisor[j]++;
            divisors[j].push_back(i);
        }
    }

    for (i = 1; i <= 10; i++)
    {
        cout << i << " : " << number_of_divisor[i] << "\n";
        for (auto x : divisors[i])
            cout << x << " ";
        cout << "\n";
    }
}