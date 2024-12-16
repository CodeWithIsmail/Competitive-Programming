#include<bits/stdc++.h>
using namespace std;
#define max 100000
bool visited[max];
vector<int>graph[max];
void bfs(int vertex)
{
    

}
int main()
{
    int n,m;
    cout<<"Enter number of vertex"<<endl;
    cout<<"Enter number of edges:"<<endl;
    cin>>n;
    while(n--)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for()

}