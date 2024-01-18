#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int n = a.size(), i, oddDigit = 0;
    map<char, int> count;

    for (i = 0; i < n; i++)
        count[a[i]]++;
    for (auto x : count)
    {
        if (x.second % 2)
            oddDigit++;
    }

    if (n % 2 == 0 && oddDigit == 0 || n % 2 == 1 && oddDigit == 1)
    {
        string ans, temp = "";
        for (auto x : count)
        {
            if (x.second % 2)
                temp = x.first;
            for (i = 0; i < x.second / 2; i++)
                ans.push_back(x.first);
        }
        cout << ans << temp;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    else
        cout << "NO SOLUTION";
}