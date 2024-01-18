#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a[3];
        int i, check = 0;
        for (i = 0; i < 3; i++)
            cin >> a[i];

        for (i = 0; i < 3; i++)
        {
            if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '.' && check == 0)
            {
                cout << a[i][0];
                check = 1;
            }
        }
        for (i = 0; i < 3; i++)
        {
            if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '.' && check == 0)
            {
                cout << a[0][i];
                check = 1;
            }
        }
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '.' && check == 0)
        {
            cout << a[0][0];
            check = 1;
        }
        if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '.' && check == 0)
        {
            cout << a[0][2];
            check = 1;
        }
        if (!check)
            cout << "DRAW";
        cout << endl;
    }
}