#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, best_case = 0, worst_case = 0;
    cin >> n >> k;
    string a[n], main;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> main;
    int s = main.size();
    for (i = 0; i < n; i++)
    {
        if (a[i].size() < s)
            best_case++;
        if (a[i].size() <= s)
            worst_case++;
    }
    int best_time = (best_case / k) * 5 + best_case + 1;
    int worst_time = ((worst_case - 1) / k) * 5 + worst_case;
    cout << best_time << " " << worst_time;
}