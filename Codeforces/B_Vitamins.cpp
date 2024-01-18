// https : // codeforces.com/contest/1042/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, ans = INT_MAX;
    long long A = INT_MAX, B = INT_MAX, C = INT_MAX, AB = INT_MAX, AC = INT_MAX, BC = INT_MAX, ABC = INT_MAX;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string a;
        long long c;
        cin >> c >> a;
        sort(a.begin(), a.end());
        if (a == "A")
            A = min(A, c);
        else if (a == "B")
            B = min(B, c);
        else if (a == "C")
            C = min(C, c);
        else if (a == "AB")
            AB = min(AB, c);
        else if (a == "AC")
            AC = min(AC, c);
        else if (a == "BC")
            BC = min(BC, c);
        else if (a == "ABC")
            ABC = min(ABC, c);
    }
    if (A + B + C < ans)
        ans = A + B + C;
    if (AB + C < ans)
        ans = AB + C;
    if (AC + B < ans)
        ans = AC + B;
    if (A + BC < ans)
        ans = A + BC;
    if (AB + AC < ans)
        ans = AB + AC;
    if (AB + BC < ans)
        ans = AB + BC;
    if (AC + BC < ans)
        ans = AC + BC;
    if (ABC < ans)
        ans = ABC;

    if (ans == INT_MAX)
        ans = -1;
    cout << ans;
}