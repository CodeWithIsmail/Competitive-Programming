// https://codeforces.com/contest/1213/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, odd = 0, even = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        x % 2 ? odd++ : even++;
    }
    cout << min(odd, even);
}