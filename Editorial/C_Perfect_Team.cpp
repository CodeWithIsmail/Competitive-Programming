///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Optimize cin cout:
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    ll q;
    cin >> q;
    while (q--)
    {
        ll coder, mathematician, normal;
        cin >> coder >> mathematician >> normal;

        ll lower = 0, upper = min(coder, mathematician), ans = -1;
        while (lower <= upper)
        {
            ll mid = (lower + upper) / 2;

            ll rem_coder = coder - mid;
            ll rem_mathematician = mathematician - mid;

            if (rem_coder + rem_mathematician + normal >= mid)
            {
                ans = max(ans, mid);
                lower = mid + 1;
            }
            else
                upper = mid - 1;
        }
        cout << ans << "\n";
    }
}