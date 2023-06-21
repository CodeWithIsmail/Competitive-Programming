#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long n, i, sum = 0;
        cin >> n;
        for (i = n; i > 0; i = i / 2)
            sum += i;
        cout << sum << endl;
    }
}