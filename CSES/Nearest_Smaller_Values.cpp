#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, temp, i;
    cin >> n;
    stack<long long> index;
    vector<long long> num;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        num.push_back(temp);
    }
    for (i = 0; i < n; i++)
    {
        while (index.empty() == 0 && num[index.top()] > num[i])
            index.pop();
        index.empty() ? cout << 0 : cout << index.top() + 1;
        index.push(i);
        cout << " ";
    }
}