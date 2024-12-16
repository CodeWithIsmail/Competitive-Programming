#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, i, j, temp = 0, k;
    //cin >> r >> c;
    int a[15][15];
    for (k = 0; k < 7; k++)
    {
        for (i = k; i < 15 - k; i++)
        {
            for (j = k; j < 15 - k; j++)
            {
                if (!temp)
                    a[i][j] = 2;
                else
                    a[i][j] = 1;
            }
        }
        if (temp)
            temp = 0;
        else
            temp = 1;
    }

    for (i = 0; i < 15 ; i++)
        {
            for (j = 0; j < 15 ; j++)
            {
              cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    // a[7][7] = 1;
    // int ans = a[r - 1][c - 1];
    // if (ans == 1)
    //     cout << "white";
    // else
    //     cout << "black";
}
