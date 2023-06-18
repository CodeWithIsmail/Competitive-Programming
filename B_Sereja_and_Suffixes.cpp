#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int main()
{
    int n, m, i, x;
    cin >> n >> m;
    int a[n], b[n + 1] = {0};
    bool check[MAX];
    memset(check, false, sizeof check);
    for (i = 0; i < n; i++)
        cin >> a[i];
    reverse(a, a + n);
    for (i = 0; i < n; i++)
    {
        b[i + 1] += b[i];
        if (check[a[i] - 1] == false)
        {
            b[i + 1]++;
            check[a[i] - 1] = true;
        }
    }
    reverse(b, b + n + 1);
    while (m--)
    {
        cin >> x;
        cout << b[x - 1] << endl;
    }
}