#include <bits/stdc++.h>
using namespace std;
#define max 100005
vector<int> graph[max];
bool visited[max] = {false};
 
void dfs(int vertex)
{
    visited[vertex] = true;
    for (int child : graph[vertex])
    {
        if (!visited[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    vector<int>disconnect;
    int n, m, i, count = 0;
    cin >> n >> m;
 
    for (i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
 
    for(i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            disconnect.push_back(i);
            // count++;
            dfs(i);
        }
    }
    cout<<disconnect.size()-1<<endl;
    for(i=1;i<disconnect.size();i++) cout<<disconnect[i]-1<<" "<<disconnect[i]<<endl;
   
}