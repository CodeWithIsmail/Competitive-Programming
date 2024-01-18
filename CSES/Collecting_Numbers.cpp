#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, temp, tempMax = 0, ans = 0;
    cin >> n;
    vector<int> num, max;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        num.push_back(temp);
        if (temp > tempMax)
            tempMax = temp;
        max.push_back(tempMax);
    }
    for (i = 0; i < n; i++)
    {
        // cout<<num[i]<<" "<<max[i]<<endl;
        if (num[i] < max[i])
            ans++;
    }
    cout << ans;
}