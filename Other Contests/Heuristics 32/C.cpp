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
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    int n,k;
    cin>>n>>k;
    int a[n];
    f1(i,0,n)
    cin>>a[i];
    int dd[n+1];
    dd[0]=0;
    f1(i,0,n)
    {
    	dd[i+1]=dd[i]^a[i];
    }
    int ans=0;
    f1(i,k,n+1)
    {
    	ans=max(ans,dd[i]^dd[i-k]);
    }
    cout<<ans;
    return 0;
}