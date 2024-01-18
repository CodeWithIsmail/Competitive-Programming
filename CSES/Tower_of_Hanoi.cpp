#include <bits/stdc++.h>
using namespace std;
void TOH(int n, int from, int mid, int to)
{
    if (n > 0)
    {
        TOH(n - 1, from, to, mid);
        cout << from << " " << to << endl;
        TOH(n - 1, mid, from, to);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    TOH(n, 1, 2, 3);
}