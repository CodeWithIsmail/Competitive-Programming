#include <bits/stdc++.h>
using namespace std;
int main()
{
    int time1, time2, time, h, m;
    string a, b;
    cin >> a >> b;
    time1 = ((a[0] - 48) * 10 + a[1] - 48) * 60 + (a[3] - 48) * 10 + a[4] - 48;
    time2 = ((b[0] - 48) * 10 + b[1] - 48) * 60 + (b[3] - 48) * 10 + b[4] - 48;
    time = (time1 + time2) / 2;
    h = time / 60;
    m = time % 60;
    if (h < 10)
        cout << "0";
    cout << h << ":";
    if (m < 10)
        cout << "0";
    cout << m;
}