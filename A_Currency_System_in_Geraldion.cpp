#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    int x = *min_element(a, a + n);
    x == 1 ? cout << "-1" : cout << "1";
}