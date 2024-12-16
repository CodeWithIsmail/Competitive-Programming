#include <bits/stdc++.h>
using namespace std;

const int mx = 200;
int dist[mx + 1][mx + 1];
map<string, int> ind;
vector<string> name;
int main()
{
    int i, j;

    for (i = 1; i <= mx; i++)
    {
        for (j = 1; j <= mx; j++)
        {
            dist[i][j] = INT_MAX;
        }
    }
    freopen("fw.txt", "r", stdin);
    int edge;
    cin >> edge;
    cout << edge << endl;
    for (i = 0; i < edge; i++)
    {
        string u, v;
        int w;
        cin >> u >> v >> w;
        cout << u << " " << v << " " << w << endl;
        if (!ind[u])
        {
            name.push_back(u);
            ind[u] = name.size();
        }
        if (!ind[v])
        {
            name.push_back(v);
            ind[v] = name.size();
        }
        dist[ind[u]][ind[v]] = w;
    }
    int node = ind.size();
    for (i = 1; i <= node; i++)
    {
        for (j = 1; j <= node; j++)
        {
            if (i == j)
                dist[i][j] = 0;
        }
    }

    for (i = 1; i <= node; i++)
    {
        cout << name[i - 1] << " ";
    }
    cout << endl;
    for (i = 1; i <= node; i++)
    {
        for (j = 1; j <= node; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
}
