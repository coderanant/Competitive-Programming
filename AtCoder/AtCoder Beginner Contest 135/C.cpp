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
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int a[n+1];
    f1(i,0,n+1)
    cin>>a[i];
    int b[n];
    f1(i,0,n)
    cin>>b[i];
    int ans=0;
    f1(i,0,n)
    {
    	ans+=min(b[i],a[i]);
    	b[i]-=a[i];
    	if(b[i]>0)
    	{
    		ans+=(min(b[i],a[i+1]));
    		a[i+1]-=b[i];
    		if(a[i+1]<0)
    			a[i+1]=0;
    	}
    }
    cout<<ans;
    return 0;
}