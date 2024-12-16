#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
bool vis[MAX];
vector<int>graph[MAX];
void dfs(int )
{
    memset(vis,false,sizeof vis);
    int startnode=1;
    queue<int>q;
    q.push(startnode);
    vis[startnode]=true;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        cout<<"I am currently at "<<temp<<endl;
        for(auto v:graph[temp])
        {
            if(vis[v]==true) continue;
            q.push(v);
            vis[v]=true;
        }
    }
}
