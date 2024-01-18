#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, count = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<char> tempA, tempB;
        for (i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                count++;
                tempA.push_back(a[i]);
                tempB.push_back(b[i]);
            }
        }
        if (count == 0)
            cout << "Yes";
        else if (count == 2)
        {
            if (tempA[0] == tempA[1] && tempB[0] == tempB[1])
                cout << "Yes";
            else
                cout << "No";
        }
        else
            cout << "No";
        cout << endl;
    }
}