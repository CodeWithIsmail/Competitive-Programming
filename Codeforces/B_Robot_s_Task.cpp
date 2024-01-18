// https://codeforces.com/problemset/problem/583/B
#include<bits/stdc++.h>
using namespace std;
int n,i;
const int mx =1000;
int a[mx];
int current=0,ans=0;

void LR()
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]<=current && a[i]!=-1)
        {
            current++;
            a[i]=-1;
        }
    }
}
void RL()
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        if(a[i]<=current && a[i]!=-1)
        {
            current++;
            a[i]=-1;
        }
    }
}
int main()
{
    int x,w=1;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];

    LR();

    while(current<n)
    {
        if(w==1)
        {
            RL();
            w=2;
        }
        else
        {
            LR();
            w=1;
        }
        ans++;
    }
    cout<<ans<<endl;
}