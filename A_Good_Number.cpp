#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, k, count = 0;
    cin >> n >> k;
    while (n--)
    {
        int check2 = 0;
        bool check[k + 1];
        memset(check, false, sizeof check);
        string a;
        cin >> a;
        for (i = 0; i < a.size(); i++)
            check[a[i] - 48] = true;
        for (i = 0; i <= k; i++)
            if (check[i] == false)
                check2 = 1;
        if (!check2)
            count++;
    }
    cout << count;
}