#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, ans;
    cin >> a >> b >> c >> d >> e;
    ans = a + b + c + d + e;
    ans % 5 || !ans ? cout << "-1" : cout << ans / 5;
}