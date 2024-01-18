#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int t, i, j, s;
    cin >> t;
    int num[t];
    for (i = 0; i < t; i++)
        cin >> num[i];
    s = *max_element(num, num + t);
    //    map<int,int>div;
    int div[s + 1] = {0};
    for (i = 1; i <= s; i++)
    {
        for (j = i; j <= s; j += i)
        {
            div[j]++;
        }
    }
    for (i = 0; i < t; i++)
        cout << div[num[i]] << endl;
}