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

int s(int a)
{
    int ans = 0;
    while(a)
    {
        int rem = a%10;
        ans+=rem;
        a/=10;
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    
    vector<int> ans;
    f1(i,1,82)
    {
        int sx = i;
        f1(j,1,a)
        sx*=i;
        int x = b*sx+c;
        if((s(x) == i && x>0) && x < 1e9)
        {
            ans.pb(x);
        }
    }

    sort(ans.begin(), ans.end());
    cout<<ans.size()<<endl;
    f1(i,0,ans.size())
    cout<<ans[i]<<gp;
    return 0;
}