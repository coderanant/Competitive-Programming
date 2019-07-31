/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(i=a;i<b;i++)
#define f2(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
int i,j;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    //     freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int a[n];
    f1(i,0,n)
    cin>>a[i];

    sort(a,a+n);
    vector<int> odd;
    vector<int> even;
    vector<pair<int,int>> ans;
    int st=a[n-1];
    odd.pb(a[0]);
    f1(i,1,n-1)
    {
        if(a[i]<0)
            odd.pb(a[i]);
        else
            even.pb(a[i]);
    }
    f1(i,0,even.size())
    {
        ans.pb(mp(odd[0],even[i]));
        odd[0]-=even[i];
    }
    f1(i,0,odd.size())
    {
        ans.pb(mp(st,odd[i]));
        st-=odd[i];
    }
    cout<<st<<endl;
    f1(i,0,ans.size())
    {
        cout<<ans[i].ff<<gp<<ans[i].ss<<endl;
    }
    return 0;
}