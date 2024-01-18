#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0, temp = 0;
        cin >> n;
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }
        if (a)
        {
            temp = n / a;
            for (i = 2; i <= sqrt(temp); i++)
            {
                if (temp % i == 0 && i != a)
                {
                    b = i;
                    c = temp / i;
                    break;
                }
            }
        }
        if (a * b * c == n && c != a && c != b && c != 1)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c;
        }
        else
            cout << "NO";
        cout << endl;
    }
}