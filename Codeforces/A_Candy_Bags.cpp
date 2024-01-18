#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int l = 1, r = n * n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n / 2; j++)
        {
            cout << l << " " << r << " ";
            l++;
            r--;
        }
        cout << endl;
    }
}