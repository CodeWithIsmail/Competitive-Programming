///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

/*

sample problem:

https://www.spoj.com/problems/TDPRIMES/
https://www.spoj.com/problems/HS08PAUL/
https://vjudge.net/problem/UVA-543
https://codeforces.com/contest/776/problem/B

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int mx = 1e7 + 12;
bool isPrime[mx];
vector<int> primes;
void primeGen(int limit)
{
    int i, j;
    isPrime[2] = true;
    for (i = 3; i <= limit; i += 2)
        isPrime[i] = true;
    primes.push_back(2);
    for (i = 3; i <= sqrt(limit); i += 2)
    {
        if (isPrime[i])
        {
            for (j = i + i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (i = 3; i <= limit; i += 2)
    {
        if (isPrime[i])
            primes.push_back(i);
    }
}
int main()
{
    optimize();
    ll i, j;
    primeGen(1e7);
    // cout << primes.size() << "\n";
    for (i = 0; i <= primes.size(); i += 100)
        cout << primes[i] << "\n";
    // for (auto x : primes)
    //     cout << x << " ";
}