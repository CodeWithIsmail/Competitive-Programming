#include<bits/stdc++.h>
using namespace std;
#define N 100005
bool visited[N];
vector<int>graph[N];
void dfs(int vertex,vector<string>country1)
{
    if(!visited[vertex])
    {
        cout<<country1[vertex-1]<<endl;
        visited[vertex]=true;
    }

}
int main()
{
    int i,n; //number of countrys
    cin>>n;
    vector<string>country1;
    map<string,int>country;
    for(i=1;i<=n;i++)
    {
        string temp;
        country1.push_back(temp);
        country.insert({temp,i});
    }

    int m; //number of flight
    for(i=1;i<=m;i++)
    {
        string cou1,cou2;
        cin>>cou1>>cou2;
        graph[country[cou1]].push_back(country[cou2]);
        graph[country[cou2]].push_back(country[cou1]);
    }

    string home;
    cin>>home;
    visited[country[home]]=true;
    dfs(country[home],country1);


}