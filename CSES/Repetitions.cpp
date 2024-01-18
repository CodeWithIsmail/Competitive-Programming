#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, temp = 1;
    string a;
    cin >> a;
    priority_queue<int> ans;
    for (i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == a[i + 1])
            temp++;
        else
        {
            ans.push(temp);
            temp = 1;
        }
    }
    ans.push(temp);
    cout << ans.top();
}