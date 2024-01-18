#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    bool check[n] = {false};
    for (i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        check[temp - 1] = true;
    }
    for (i = 0; i < n; i++)
    {
        if (!check[i])
            cout << i + 1;
    }
}