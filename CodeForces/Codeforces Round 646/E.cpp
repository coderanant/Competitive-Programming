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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;
const int N = 200001;
vector<int> adj[N];
int cost[N], ini[N], fin[N], vis[N];
int n, ans;
pair<int,int> dfs(int node)
{
    if(vis[node])
    return {0, 0};

    vis[node] = 1;

    int o = 0, z = 0;
    for(int i : adj[node])
    {
        if(vis[i] == 0)
        cost[i] = min(cost[i], cost[node]);
        pair<int,int> temp = dfs(i);
        o += temp.ff;
        z += temp.ss;
    }
    
    if(ini[node] == 1 && fin[node] == 0)
    o++;
    else if(ini[node] == 0 && fin[node] == 1)
    z++;
    ans += min(o, z) * 2 * cost[node];
    return {o - min(o, z), z - min(o, z)};
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int one = 0, zer = 0;
    f1(i,1,n + 1)
    {
        cin>>cost[i]>>ini[i]>>fin[i];
        if(ini[i] == 1) one++;
        if(fin[i] == 1) zer++;
    }

    f1(i,1,n)
    {
        int u, v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    if(one != zer)
    {
        cout<<-1<<endl;
        return 0;
    }
    ans = 0;
    dfs(1);

    cout<<ans<<endl;
    return 0;
}