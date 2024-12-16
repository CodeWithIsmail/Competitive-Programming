#include<bits/stdc++.h>
using namespace std;
#define max 100000
bool visited[max];
int level[max];
vector<int>graph[max];

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    visited[source]=true;

    while(!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(int child:graph[cur_v])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child]=true;
                level[child]=level[cur_v]+1;
            }
        }
    }
    cout<<endl;
}

int main()
{
    int n,i;
    cin>>n;

    for(i=0;i<n;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    bfs(1);

    for(i=1;i<=n;i++)
    {
        cout<<i<<": "<<level[i]<<endl;
    }


}
