/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
ll temp;

int n;
int a[22][22];
int vis[22][22];
int ans;

void dfs(int x,int y)
{
    if(x<1||x>n||y<1||y>n)
        return ;
    if(a[x][y]==1||vis[x][y]==1)
    {
        return ;
    }
    if(x==n&&y==n)
    {
        ans++;
        return ;
    }
    vis[x][y]=1;
    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
    vis[x][y]=0;
    return ;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
        freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //cout<<n<<endl;
        ans=0;
            
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));
        f1(i,1,n+1)
        {
            f1(j,1,n+1)
            {
                cin>>a[i][j];
            }
        }
        a[1][1]=0;
        dfs(1,1);
        //cout<<1<<endl;
        cout<<ans<<endl;

    }
    return 0;
}