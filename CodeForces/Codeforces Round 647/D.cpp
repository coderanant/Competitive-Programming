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

vector<int> adj[500001];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    
    f1(i,0,m)
    {
        int a, b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<pair<int,int>> topic;
    int to;
    f1(i,1,n + 1)
    {
        cin>>to;
        topic.pb(mp(to, i));
    }

    sort(topic.begin(), topic.end());

    int ans[n + 1];
    f1(i,1,n + 1)
    ans[i] = mod;

    f1(i,0,topic.size())
    {
        int temp[adj[topic[i].ss].size() + 2];
        memset(temp, 0, sizeof(temp));
        int ssp = adj[topic[i].ss].size() + 2;
        for(int j : adj[topic[i].ss])
        {
            if(ans[j] < ssp)
            temp[ans[j]] = 1;
        }
        int numb = n;
        f1(j,1,n + 2)
        {
            if(temp[j] == 0) 
            {
                numb = j;
                break;
            }
        }
        if(numb != topic[i].ff)
        {
            cout<<-1<<endl;
            return 0;
        }
        ans[topic[i].ss] = topic[i].ff;
    }

    f1(i,0,topic.size())
    cout<<topic[i].ss<<gp;
    return 0;
}