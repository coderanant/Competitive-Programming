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
    int n, k;
    cin>>n>>k;
    vector<pair<int,int>> arr(k+1);
    f1(i,0,k+1)
    arr[i].ff = arr[i].ss = 0;
    f1(i,0,n)
    {
        cin>>temp;
        arr[temp].ff++;
    }
    f1(i,1,k+1)
    {
        cin>>temp;
        arr[i].ss = temp;
    }
    vector<int> ans[n+1];
    set<int> sat[n+1];
    multiset<int,greater<int>> mp;

    f1(i,0,n+1)
    {
        sat[0].insert(i);
        mp.insert(0);
    }
    f2(i,k,1)
    {
        f1(j,0,arr[i].ff)
        {
            auto ind = mp.lower_bound(arr[i].ss-1);
            int index = *ind;
            mp.erase(ind);
            mp.insert(index+1);
            
            int tcind = *sat[index].begin();
            sat[index].erase(tcind);
            sat[index+1].insert(tcind);

            ans[tcind].pb(i);
        }
    }
    int sum = 0;
    f1(i,0,n+1)
    {
        if(ans[i].size() == 0)
        {
            sum = i;
            break;
        }
    }
    cout<<sum<<endl;
    f1(i,0,sum)
    {
        cout<<ans[i].size()<<gp;
        f1(j,0,ans[i].size())
        cout<<ans[i][j]<<gp;
        cout<<endl;
    }
    return 0;
}