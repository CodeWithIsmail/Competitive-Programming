///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///
 
///   ***   ---   ||       Author: Code_with_Ismail      |||   ---   ***   ///
 
#include<bits/stdc++.h>
using namespace std;
 
//Data Type:
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
 
//Shortcut:
#define  min3(a,b,c)            min(a,min(b,c))
#define  max3(a,b,c)            max(a,max(b,c))
#define  min4(a,b,c,d)          min(a,min(b,min(c,d)))
#define  max4(a,b,c,d)          max(a,max(b,max(c,d)))
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
#define     YES            printf("YES");
#define     Yes            printf("Yes");
#define     NO             printf("NO");
#define     No             printf("No");
 
//Const value:
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
//Optimize cin cout:
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
//Fraction:
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
 
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {

        }
    }
}



#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define INF 1073741824
#define ll long long
#define PI (2*acos(0.0))
#define p1(n) printf("showing %d\n",n)
#define p2(m,n) printf("showing %d %d\n",m,n)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define x first
#define y second
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))
#define all(n) n.begin(),n.end()
//first four adjacent,second four corner
//int row[8]={0,-1,0,1,1,-1,-1,1};
//int col[8]={-1,0,1,0,-1,-1,1,1};
using namespace std;
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int main(){
    int i,j,k,n,m,val,t=0,test;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        cin>>n>>m;
        bool possible=true;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&val);
                int x=4;
                if(i==0 or i==n-1)x--;
                if(j==0 or j==m-1)x--;
                if(val>x)possible=false;
            }
        }
        if(!possible)printf("NO\n");
        else{
            printf("YES\n");

            for(i=0;i<n;i++){

                for(j=0;j<m;j++){
                    int x=4;
                    if(i==0 or i==n-1)x--;
                    if(j==0 or j==m-1)x--;
                    printf("%d ",x);
                }
                printf("\n");
            }
        }
    }
    //free();   //if pointer array
    return 0;
}

