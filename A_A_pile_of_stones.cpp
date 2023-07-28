#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum = 0;
    string s;
    cin >> n >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '-' && sum > 0)
            sum--;
        else if (s[i] == '+')
            sum++;
    }
    cout << sum;
}