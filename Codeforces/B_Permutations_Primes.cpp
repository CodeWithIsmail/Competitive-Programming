#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        if (n == 1)
            cout << 1;
        else if (n == 2)
            cout << "2 1";
        else if (n == 3)
            cout << "2 1 3";
        else
        {
            int count = 0, temp = n - 3, i = 4, temp2 = temp / 2;
            cout << 2 << " ";
            while (count < temp2)
            {
                cout << i << " ";
                i++;
                count++;
            }
            cout << 1 << " ";
            count = 0;
            while (count < temp - temp2)
            {
                cout << i << " ";
                i++;
                count++;
            }
            cout << 3;
        }
        cout<<endl;
    }
}