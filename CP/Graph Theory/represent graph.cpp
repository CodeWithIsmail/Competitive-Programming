#include<bits/stdc++.h>
using namespace std;
/* using adjacency matrix
int main()
{
    int n,m; cin>>n>>m;
    int graph[n+1][n+1];
    for(i=0;i<n;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
}
*/
#define MAX 100005
vector<int>graph[MAX];
bool visited[MAX];

void dfs(int vertex)
{
    int count=0;
    cout<<vertex<<endl;
    visited[vertex]=true;
    for(int child:graph[vertex])
    {
        cout<<"parent "<<vertex<<" child "<<child<<endl;
        if(!visited[child]) {
                count++;
        dfs(child);
        }
    }
    cout<<count;

}
int main()
{
    int n,m,i;
    cin>>n>>m;

    for(i=0; i<m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
        /*for weighted graph:
        vector<pair<int,int>>graph[n];
        graph[v1].push_back({v2,w});
        */
    }
    dfs(1);
    //cout<<count;
}
