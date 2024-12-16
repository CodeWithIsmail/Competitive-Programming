#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
bool visited[MAX];
vector<int>graph[MAX];
int main()
{
    memset(visited,false,sizeof visited);
    queue<int>q;
    int firstnode=1;
    q.push(firstnode);
    visited[firstnode]=true;

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        cout<<"I am currently at "<<temp<<endl;
        for(auto v:graph[temp])
        {
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
        }
    }
}
