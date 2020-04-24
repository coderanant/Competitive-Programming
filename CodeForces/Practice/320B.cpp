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
int vis[101];
vector<vector<int>> arr;

void dfs(int node)
{
    if(vis[node] == 1)
    return;
    vis[node] = 1;
    f1(i,0,arr[node].size())
    dfs(arr[node][i]);
    return ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int>> poin;
    f1(i,0,n)
    {
        cin>>temp;
        int a, b;
        cin>>a>>b;
        if(temp == 1)
        {
            poin.pb({a,b});
            vector<int> temp;
            int n = poin.size(); n--;
            f1(j,0,poin.size()-1)
            {
                if( (a > poin[j].ff && a < poin[j].ss) || (b > poin[j].ff && b < poin[j].ss) )
                {
                    temp.pb(j);
                }
                if( (a < poin[j].ff && poin[j].ff < b) || ( a < poin[j].ss && b > poin[j].ss) )
                {
                    arr[j].pb(n);
                }
            }
            arr.pb(temp);
        }
        else
        {
            memset(vis, 0, sizeof(vis));
            dfs(a-1);
            if(vis[b-1] == 1)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}