#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int check = 0, temp, temp1, temp2;
        long long int a, b, c;
        cin >> a >> b >> c;

        // for a
        temp1 = c - b;
        temp2 = b - temp1;
        if (temp2 % a == 0 && temp2 / a > 0)
            check = 1;

        // for b
        temp = abs(c - a);
        if (temp % 2 == 0)
        {
            temp1 = temp / 2;
            if (a > c)
                temp2 = a - temp1;
            else if (a < c)
                temp2 = a + temp1;
            else if (a == c && a % b == 0)
                check = 1;

            if (temp2 % b == 0 && temp2 / b > 0)
                check = 1;
        }

        // for c
        temp1 = a - b;
        temp2 = b - temp1;
        if (temp2 % c == 0 && temp2 / c > 0)
            check = 1;

        check ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}