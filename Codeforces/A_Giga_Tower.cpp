#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, check = 0, count = 0;
    cin >> n;
    while (!check)
    {
        count++;
        n++;
        string temp = to_string(n);
        sort(temp.begin(), temp.end());
        if (binary_search(temp.begin(), temp.end(), '8'))
        {
            cout << count;
            check = 1;
        }
    }
}