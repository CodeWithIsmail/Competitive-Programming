#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, s, i, m;
    cin >> n;
    m = n;
    s = (n * (n + 1)) / 2;
    if (s % 2)
        cout << "NO";
    else
    {
        cout << "YES" << endl;
        if (n % 2)
        {
            cout << n / 2 + 1 << endl << "1 2 ";
            for (i = 4; i <= 3 + (n - 3) / 4; i++)
            {
                cout << i << " " << m << " ";
                m--;
            }
 
            cout << endl << n / 2 << endl << "3 ";
            for (i = 3 + (n - 3) / 4 + 1; i <= (n - 3) / 2 + 3; i++)
            {
                cout << i << " " << m << " ";
                m--;
            }
        }
        else
        {
            cout << n / 2 << endl;
            for (i = 1; i <= n / 4; i++)
                cout << i << " "<< n + 1 - i << " ";
                
            cout << endl;
 
            cout << n / 2 << endl;
            for (i = n / 4 + 1; i <= n / 2; i++)
                cout << i << " "<< n + 1 - i << " ";
        }
    }
}