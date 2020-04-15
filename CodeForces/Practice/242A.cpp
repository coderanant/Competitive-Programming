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
    
    int x, y, a, b;
    cin>>x>>y>>a>>b;
    vector<pair<int,int>> ans;
    f1(i,max(a,b),x+1)
    {
        f1(j,b,min(i,y+1))
        ans.pb(mp(i,j));
    }
    cout<<ans.size()<<endl;
    f1(i,0,ans.size())
    {
        cout<<ans[i].ff<<gp<<ans[i].ss<<endl;
    }
    return 0;
}