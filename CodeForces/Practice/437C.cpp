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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    int v[n+1];
    f1(i,1,n+1)
    cin>>v[i];

    vector<int> arr[n+1];
    int tot_val[n+1];
    memset(tot_val,0,sizeof(tot_val));
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    f1(i,1,n+1)
    {
        f1(j,0,arr[i].size())
        {
            tot_val[i]+=v[arr[i][j]];
        }
    }

    int ans = 0;
    temp = n-1;
    while(temp--)
    {
        int minpart = -1;
        int mini = -1;
        f1(i,1,n+1)
        {
            if(v[i] > mini)
            {
                mini = v[i];
                minpart = i;
            }
            else if(v[i] == mini)
            {
                if(tot_val[i] > v[minpart])
                {
                    mini = v[i];
                    minpart = i;
                }
            }
        }
        ans += tot_val[minpart];
        tot_val[minpart] = mod;
        f1(j,1,n+1)
        {
            f1(k,0,arr[j].size())
            {
                if(arr[j][k] == minpart)
                {
                    tot_val[j] -= v[minpart];
                }
            }
        }
        v[minpart] = -1;
        // cout<<minpart<<endl;
    }
    cout<<ans<<endl;

    return 0;
}