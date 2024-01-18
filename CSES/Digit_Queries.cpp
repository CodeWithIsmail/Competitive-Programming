#include <bits/stdc++.h>
using namespace std;
void solve(long long n)
{
    if (n < 10)
    {
        cout << n << endl;
        return;
    }
    long long x = 1, i = 9, rem, rem2, temp = 0, temp2 = 0, ans = 0, div, count = 1;
    while ( temp+i * count <= n)
    {
        temp += i * count;
        count++;
        ans += i * x;
        // x++;
        i *= 10;
        // cout<<temp<<" "<<ans<<" "<<count<<endl;
    }
    //   cout<<temp<<endl;
   
    rem = n - temp;
    div = rem / count;
    // cout<<div<<" "<<rem<<endl;
    rem2 = rem % count;
    ans += div;
    // cout<<rem2<<" "<<ans<<endl;
    if (rem2)
    {
        ans++;
        // cout << ans << endl;
        string str = to_string(ans);
        // cout<<rem2<<endl;
        cout << str[rem2 - 1];
        // long long z = str[rem2 - 1] - 48;
        // return z;
    }
    else
        cout << ans % 10;
    cout << endl;
}
int main()
{
    long long q, n;
    cin >> q;
    while (q--)
    {
        cin >> n;
        solve(n);
    }
}