#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        long long Ax, Ay, Bx, By, Cx, Cy, countY, countX, ans = 1;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

        // for y axis
        if (By > Ay && Cy > Ay)
            countY = min(By, Cy) - Ay + 1;
        else if (By < Ay && Cy < Ay)
            countY = Ay - max(By, Cy) + 1;
        else
            countY = 0;

        // for x axis
        if (Bx > Ax && Cx > Ax)
            countX = min(Bx, Cx) - Ax + 1;
        else if (Bx < Ax && Cx < Ax)
            countX = Ax - max(Bx, Cx) + 1;
        else
            countX = 0;

        if (countX == 0 && countY == 0)
            ans = 1;
        else if (countX != 0 && countY != 0)
            ans = countX + countY - 1;
        else
            ans = countX + countY;
        cout << ans << endl;
    }
}