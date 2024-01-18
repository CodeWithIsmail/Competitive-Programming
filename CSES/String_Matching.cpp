#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, count = 0;
    string a, b;
    cin >> a >> b;
    for (i = 0; i <= a.size() - b.size(); i++)
    {
        string temp = a.substr(i, b.size());
        // cout<<temp<<endl;
        if (temp == b)
            count++;
    }
    cout << count;
}