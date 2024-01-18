#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i;
        cin >> n;
        long long a[n];
        map<long long, int> count;
        a[0] = 0;
        for (i = 1; i < n; i++)
            cin >> a[i];
        long long s, sum = 0;
        for (i = 1; i < n; i++)
        {
            long long dif = a[i] - a[i - 1];
            if (dif > n)
            {
                s = dif;
            }
            else
            {
                count[dif]++;
            }
        }
        int rem = 0;
        for (i = 1; i <= n; i++)
        {
            if (count[i] == 0)
            {
                rem++;
                sum += i;
            }
        }
        for (auto x : count)
        {
            if (x.second > 1)
            {
                s = x.first;
                break;
            }
        }
        if (rem == 1)
        {

            sum <= n ? cout << "YES" : cout << "NO";
            cout << endl;
        }
        else if (rem == 2)
        {
            sum == s ? cout << "YES" : cout << "NO";
            cout << endl;
        }

        else
            cout << "NO" << endl;
        //  cout<<sum<<" "<<rem<<" "<<s<<endl;
    }
}