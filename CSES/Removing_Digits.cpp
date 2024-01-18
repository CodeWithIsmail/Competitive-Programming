#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int temp, count = 0, n = stoi(a);

    while (n)
    {
        count++;
        sort(a.begin(), a.end());
        temp = a.back() - 48;
        n -= temp;
        a = to_string(n);
    }
    cout << count;
}