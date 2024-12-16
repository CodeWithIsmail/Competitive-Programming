#include <bits/stdc++.h>
using namespace std;
#define max 100005
bool visited[max];
vector<int> graph[max];
void dfs(int vertex, vector<string> country1)
{
   
    if(!visited[vertex]) 
    {
        cout << country1[vertex - 1] << endl;
         visited[vertex] = true;
    }
    for (auto child : graph[vertex])
    {
        if (!visited[child])
        {
            dfs(child, country1);
        }
    }
}
// void bfs(int vertex,vector<string>country1)
// {
//     memset(visited,false,sizeof visited);
//     queue<int>q;
//     q.push(vertex);
//     visited[vertex]=true;

//     while(!q.empty())
//     {
//         int current=q.front();
//         q.pop();
//         // cout<<current<<endl;
//         if(current!=vertex) cout<<country1[current-1]<<endl;
//         for(auto child:graph[current])
//         {
//             if(!visited[child])
//             {
//                 q.push(child);
//                 visited[child]=true;
//             }
//         }
//     }
// }
int main()
{
    map<string, int> country;
    vector<string> country1;
    int n, i; // number of country
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        string coun;
        cin >> coun;
        country1.push_back(coun);
        // country[coun]=i;
        country.insert({coun, i});
    }
    int m;
    cin >> m; // m is number of flight
    for (i = 0; i < m; i++)
    {
        string coun1, coun2;
        cin >> coun1 >> coun2;
        graph[country[coun1]].push_back(country[coun2]);
        graph[country[coun2]].push_back(country[coun1]);
    }
    string home;
    cin >> home;
    visited[country[home]]=true;
    // bfs(country[home],country1);
    dfs(country[home], country1);
}