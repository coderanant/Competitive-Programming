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
    
    int ans[n+1];
    memset(ans, -1, sizeof(ans));

    int temp = 1;
    f1(i,0,m)
    {
        int a, b;
        cin>>a>>b;
        f1(j,1,n+1)
        {
            if(ans[a] == -1 && ans[b] == -1)
            {
                ans[a] = ans[b] = temp;
                temp++;
            }
            else if(ans[a] != -1 || ans[b] == -1)
            {
                if(ans[a] == -1)
                {
                    ans[a] = ans[b];
                }
                else
                ans[b] = ans[a];
            }
            else
            {
                f1(i,1,n+1)
                {
                    if(i!=b && ans[i] == ans[b])
                    ans[i] = ans[a];
                }
                ans[b] = ans[a];
            }
            
        }
    }
    int ind = 0;
    vector<vector<int>> final;
    f1(i,1,temp)
    {
        int flag = 0;
        vector<int> some;
        f1(j,1,n+1)
        {
            if(ans[j] == i)
            some.pb(j);
        }
        if(some.size() > 0)
        final.pb(some);
    }
    vector<int> nalla;
    f1(i,1,n+1)
    if(ans[i] == -1) nalla.pb(i);
    temp = 0;
    // f1(i,0,nalla.size())
    // cout<<nalla[i]<<gp;
    if(final.size()<n/3)
    {
        while(1)
        {
            if(final.size() == n/3)
            break;
            vector<int> sm;
            final.pb(sm);
        }
    }
    // cout<<final.size()<<endl;
    f1(i,0,final.size())
    {
        if(final[i].size()>3)
        {
            cout<<-1<<endl;
            return 0;
        }
        else
        {
            int szz = final[i].size();
            f1(j,0,3-szz)
            {
                if(temp < nalla.size())
                {
                    final[i].pb(nalla[temp]);
                    // cout<<nalla[temp]<<gp;
                    temp++;
                }
                else
                {
                    cout<<-1<<endl;
                    return 0;
                }
            }
        }
    }
    f1(i,0,final.size())
    {
        f1(j,0,final[i].size())
        {
            cout<<final[i][j]<<gp;
        }
        cout<<endl;
    }
    return 0;
}