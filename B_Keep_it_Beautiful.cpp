#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> y;
        int x, temp, c = 0;
        cin >> x;
        y.push_back(x);
        cout << 1;

        for (i = 1; i < n; i++)
        {
            cin >> x;

            if (x >= y[y.size() - 1] && c == 0)
            {
                y.push_back(x);
                cout << 1;
            }
            else if (x <= y[0] && c == 0)
            {
                y.push_back(x);
                c = 1;
                temp = x;
                cout << 1;
            }
            else if (x >= temp && x <= y[0] && c == 1)
            {
                y.push_back(x);
                temp = x;
                cout << 1;
            }
            else
                cout << 0;
        }
        cout << endl;
    }
}
