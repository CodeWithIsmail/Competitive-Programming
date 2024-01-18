#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertex, edges, i, j, a, b;
    cin >> vertex >> edges;
    vector<int> course[vertex + 1];
    int indegree[vertex + 1];
    memset(indegree, 0, sizeof(indegree));
 
    for (i = 0; i < edges; i++)
    {
        // cout<<indegree[i]<<" ";
        cin >> a >> b;
        course[a].push_back(b);
        indegree[b]++;
    }
 
    queue<int> topCourse;
    vector<int> ans;
 
    for (i = 1; i <= vertex; i++)
    {
        if (indegree[i] == 0)
        {
            topCourse.push(i);
        }
    }
 
    while (!topCourse.empty())
    {
        int temp = topCourse.front();
        topCourse.pop();
        ans.push_back(temp);
        for (auto x : course[temp])
        {
            indegree[x]--;
            if (indegree[x] == 0)
                topCourse.push(x);
        }
    }
 
    if (ans.size() == vertex)
    {
        for (auto x : ans)
            cout << x << " ";
    }
    else
        cout << "IMPOSSIBLE";
}