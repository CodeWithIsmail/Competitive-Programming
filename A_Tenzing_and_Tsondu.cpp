#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, i;
    cin >> t;
    while (t--)
    {
        long long tos, ten, sum1 = 0, sum2 = 0;
        cin >> tos >> ten;
        long long tosAbility[tos], tenAbility[ten];
        for (i = 0; i < tos; i++)
        {
            cin >> tosAbility[i];
            sum1 += tosAbility[i];
        }
        for (i = 0; i < ten; i++)
        {
            cin >> tenAbility[i];
            sum2 += tenAbility[i];
        }
        if (sum1 > sum2)
            cout << "Tsondu";
        else if (sum2 > sum1)
            cout << "Tenzing";
        else
            cout << "Draw";
        cout << endl;
    }
}