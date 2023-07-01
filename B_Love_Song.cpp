#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, q, a, b;
    cin >> n >> q;
    string str;
    cin >> str;
    long long arr[n + 1];
    arr[0] = 0;
    for (i = 0; i < n; i++)
        arr[i + 1] = (str[i] - 96) + arr[i];
    while (q--)
    {
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << endl;
    }
}