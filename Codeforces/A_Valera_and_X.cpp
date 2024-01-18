#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    string a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<char> type1, type2;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            i == j || n - 1 - j == i ? type1.push_back(a[i][j]) : type2.push_back(a[i][j]);
    sort(type1.begin(), type1.end());
    sort(type2.begin(), type2.end());
    type1[0] == type1[type1.size() - 1] && type2[0] == type2[type2.size() - 1] && type1[0] != type2[0] ? cout << "YES" : cout << "NO";
}