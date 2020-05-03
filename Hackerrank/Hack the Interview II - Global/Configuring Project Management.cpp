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
int n, m;
vector<int> edges[1000001];
int vis[1000004];

void solve()
{
    vis[2] = 1;
    f1(i,0,edges[2].size())
    {
        if(edges[2][i] != 1)
        {
            vis[edges[2][i]] = 1;
            f1(j,0,edges[edges[2][i]].size())
            {
                vis[edges[edges[2][i]][j]] = 1;
            }
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        f1(i,0,n+1)
        edges[i].clear();
        while(m--)
        {
            int a, b;
            cin>>a>>b;
            edges[a].pb(b);
            edges[b].pb(a);
        }
        memset(vis,0,(n+1)*sizeof(ll));
        solve();
        vis[1] = 1;
        set<int> ans;
        f1(i,0,edges[1].size())
        {
            if(vis[edges[1][i]] == 0)
            {
                ans.insert(edges[1][i]);
            }
        }
        // sort(ans.begin(), ans.end());
        if(ans.size() == 0)
        cout<<-1<<endl;
        else
        {
            for(auto i : ans)
            cout<<i<<gp;
            cout<<endl;
        }
    }
    return 0;
}