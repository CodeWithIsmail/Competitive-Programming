// https://codeforces.com/problemset/problem/868/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n, i, check1 = 0, check2 = 0;
    cin >> n;
    while (n--)
    {
        string x;
        cin >> x;
        if (a == x)
            check1 = check2 = 1;
        if (a[1] == x[0])
            check2 = 1;
        if (a[0] == x[1])
            check1 = 1;
    }
    check1 == 1 && check2 == 1 ? cout << "YES" : cout << "NO";
}