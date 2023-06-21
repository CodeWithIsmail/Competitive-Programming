// https://codeforces.com/problemset/problem/616/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i;
    string a, b;
    cin >> a >> b;
    string A, B;
    int flag = 0;
    for (i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' && flag == 0)
            continue;
        A.push_back(a[i]);
        flag = 1;
    }
    flag = 0;
    for (i = 0; i < b.size(); i++)
    {
        if (b[i] == '0' && flag == 0)
            continue;
        B.push_back(b[i]);
        flag = 1;
    }

    long long sizeA = A.size(), sizeB = B.size();
    if (sizeA == sizeB)
    {
        for (i = 0; i < sizeA; i++)
        {
            if (A[i] != B[i])
            {
                if (A[i] > B[i])
                    cout << ">";
                else
                    cout << "<";
                return 0;
            }
        }
        cout << "=";
    }
    else if (sizeA > sizeB)
        cout << ">";
    else
        cout << "<";
}