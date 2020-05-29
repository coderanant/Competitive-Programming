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
vector<int> edges[100000 + 1];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin>>n>>m;

    while(m--)
    {
        int a, b;
        cin>>a>>b;
        edges[a].pb(b);
        edges[b].pb(a);
    }

    int vis[n + 1];
    memset(vis, 0, sizeof vis);

    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        
        for(auto i : edges[node])
        {
            if(vis[i] == 0)
            {
                vis[i] = node;
                q.push(i);
            }
        }
    }
    f1(i,1,n+1)
    {
        if(vis[i] == 0)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    f1(i,2,n+1)
    cout<<vis[i]<<endl;
    return 0;
}