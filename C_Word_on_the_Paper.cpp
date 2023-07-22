#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        string ans = "";
        for (i = 0; i < 8; i++)
        {
            string temp;
            cin >> temp;
            for (j = 0; j < 8; j++)
            {
                if (temp[j] != '.')
                    ans.push_back(temp[j]);
            }
        }
        cout << ans << endl;
    }
}