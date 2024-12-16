#include<bits/stdc++.h>
using namespace std;
#define MAX[100005]
vector<int>graph[n];
bool visited[n]= {false};
void dfs(int vertex)
{

}
int main()
{
    int n,m;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }



    }
}
