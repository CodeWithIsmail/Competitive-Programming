#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        for (int j = i; j < t - 1; j++)
            cout << " ";

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // if (i < t - 1)
            cout << endl;
    }

    return 0;
}