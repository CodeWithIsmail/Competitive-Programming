#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int check = 0;
        string p, h;
        cin >> p >> h;
        sort(p.begin(), p.end());
        for (i = 0; i + p.size() <= h.size(); i++)
        {
            string temp = h.substr(i, p.size());
            sort(temp.begin(), temp.end());
            if (temp == p)
                check = 1;
        }
        check ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}