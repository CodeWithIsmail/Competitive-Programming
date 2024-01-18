#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum, i, j, s1, s2, s3, check = 0;
    cin >> n >> sum;
    int a[n];
    map<int, int> count;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            s1 = a[i];
            s2 = a[j];
            s3 = sum - s1 - s2;

            if (
                (s1 == s2 && s2 == s3 && count[s1] > 2) ||
                (s1 == s2 && s2 != s3 && count[s1] > 1 && count[s3] > 0) ||
                (s1 == s3 && s2 != s3 && count[s1] > 1 && count[s2] > 0) ||
                (s2 == s3 && s2 != s1 && count[s2] > 1 && count[s1] > 0) ||
                (s1 != s2 && s2 != s3 && s1 != s3 && count[s1] > 0 && count[s2] > 0 && count[s3] > 0))
            {
                cout << i + 1 << " " << j + 1 << " ";
                a[i] = a[j] = 0;
                check = 1;
                break;
            }
        }
        if (check)
            break;
    }

    if (check)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] == s3)
            {
                cout << i + 1;
                break;
            }
        }
    }
    else
        cout << "IMPOSSIBLE";
}