#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    string a = "aabb";
    for (i = 0; i < n / 4; i++)
        cout << a;
    for (i = 0; i < n % 4; i++)
        cout << a[i];
}