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
    f1(i,0,n)
    cin>>a[i+1];
    int b[n+1];
    memset(b,0,(n+1)*sizeof(int));
    int c[n+1];
    memset(c,0,(n+1)*sizeof(int));

    for(i=n;i>0;i--)
    {
    	if(b[i]%2==a[i])
    	{
    		continue;
    	}
    	else
    	{
    		//cout<<i<<endl;
    		b[i]++;
    		c[i]=1;
    		for(j=1;j*j<=i;j++)
    		{
    			if(i==j)
    				continue;
    			if(i%j==0)
    			{
    				b[j]++;
    				if(j*j!=i)
    					b[i/j]++;
    			}
    		}
    	}
    }
    // f1(i,1,n+1)
    // cout<<1<<gp<<i<<gp<<b[i]<<endl;
    if(b[1]%2!=a[1])
    	cout<<-1;
    else
    {
    	int ans=0;
    	f1(i,0,n+1)
    	{
    		if(c[i]==1)
    			ans++;
    	}
    	cout<<ans<<endl;
    	f1(i,0,n+1)
    	{
    		if(c[i]==1)
    			cout<<i<<gp;
    	}
    }
    return 0;
}