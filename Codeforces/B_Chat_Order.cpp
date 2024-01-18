#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    deque<string> str;
    map<string, bool> check;
    while (n--)
    {
        string a;
        cin >> a;
        str.push_front(a);
    }
    for (auto x : str)
    {
        if (!check[x])
        {
            cout << x << endl;
            check[x] = true;
        }
    }
}