#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000
bool prime[MAX];
void solve()
{
    int num, multiple, i;
    memset(prime, true, sizeof prime);
    prime[0] = prime[1] = false;

    for (num = 2; num < MAX; num++)
    {
        if (prime[num] == true)
        {
            for (multiple = 2 * num; multiple < MAX; multiple += num)
            {
                prime[multiple] = false;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    long long int a, temp;
    solve();
    while (n--)
    {
        cin >> a;
        temp = sqrt(a);

        if (prime[temp] == true && temp * temp == a)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}