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

int n;
vector<int> edges[100001];
bool vis[100001];
int siz[100001];
int sm[100001];

int dfs(int node)
{
    if(vis[node]) return 0;
    vis[node] = true;
    int sum = 0;
    for(auto i : edges[node])
    {
        int temp = dfs(i);
        sum += temp;
        siz[node] = max(siz[node], temp);
    }
    sum++;
    sm[node] = sum;
    return sum;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        for(int i = 0; i <= n; i++)
        {
            edges[i].clear();
            vis[i] = false;
            siz[i] = 0;
        }
        for(int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin>>a>>b;
            edges[a].pb(b);
            edges[b].pb(a);
        }

        dfs(1);
        
        int mini = 10000000000;
        for(int i = 1; i <= n; i++)
        {
            siz[i] = max(siz[i], n - sm[i]);
            mini = min(mini, siz[i]);
        }

        int nd1 = 0, nd2 = 0;
        for(int i = 1; i <= n; i++)
        {
            if(siz[i] == mini)
            {
                if(nd1 == 0)
                nd1 = i;
                else
                nd2 = i;
            }
        }

        if(nd2 == 0)
        {
            for(int i = 1; i <= n; i++)
            {
                if(edges[i].size() > 0)
                {
                    cout<<i<<gp<<edges[i][0]<<endl;
                    cout<<i<<gp<<edges[i][0]<<endl;
                    break;
                }
            }
        }
        else
        {
            int nd;
            for(auto i : edges[nd1])
            {
                if(i != nd2)
                {
                    nd = i;
                    break;
                }
            }
            cout<<nd1<<gp<<nd<<endl;
            cout<<nd2<<gp<<nd<<endl;
        }
    }
    return 0;
}