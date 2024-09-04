#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll i, j;
        map<char, ll> count;
        string a;
        cin >> a;
        for (auto x : a)
            count[x]++;
        string color[15] = {
            "ash",
            "red",
            "blue",
            "cyan",
            "gold",
            "grey",
            "pink",
            "black",
            "brown",
            "white",
            "orange",
            "silver",
            "purple",
            "yellow",
            "green"};

        ll ans = 0;
        for (i = 0; i < 15; i++)
        {
            bool check = true;
            string temp = color[i];
            for (auto x : temp)
            {
                if (count[x] <= 0)
                {
                    check = false;
                    // break;
                }
                count[x]--;
            }
            if (!check)
            {
                for (auto x : temp)
                {
                    count[x]++;
                }
            }
            else
                ans++;
        }
        cout << ans << endl;
    }
}