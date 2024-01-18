#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, j;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> str;
        vector<string> s;

        for (i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            s.push_back(a);
            str[a] = 1;
        }
        for (i = 0; i < n; i++)
        {
            int check = 0;
            string temp = s[i];
            for (j = 1; j < temp.size(); j++)
            {
                string temp1 = temp.substr(0, j);
                string temp2 = temp.substr(j);
                if (str[temp1] == 1 && str[temp2] == 1)
                {
                    check = 1;
                    break;
                }
            }
            check ? cout << 1 : cout << 0;
        }
        cout << endl;
    }
}