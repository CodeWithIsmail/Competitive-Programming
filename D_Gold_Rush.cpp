#include <bits/stdc++.h>
using namespace std;
bool check(int n, int target)
{
    if (n == target)
        return true;
    return n % 3 ? false : (check(n / 3, target) || check(n - n / 3, target));
}
int main()
{
    int t, n, target;
    cin >> t;
    while (t--)
    {
        cin >> n >> target;
        check(n, target) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}