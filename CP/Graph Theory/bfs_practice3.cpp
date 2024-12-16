#include<bits/stdc++.h>
using namespace std;
#define max 100005
bool visited[max];
vector<int>graph[max];
void bfs(int vertex)
{
    queue<int>q;
    q.push(vertex);
    visited[vertex]=true;

    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        cout<<current<<" ";
        for(auto child:graph[current])
        {
            if(!visited[child])
            {
                q.push(child);
                visited[child]=true;
            }
        }
    }

}
int main()
{
    int n,i; //n is number of edges
    cin>>n;
    while(n--)
    {
        int t1,t2;
        cin>>t1>>t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }

    bfs(1);


}