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
    int t;
    cin>>t;
    while(t--)
    {
    	int n,x;
    	cin>>n>>x;
    	int d[n],h[n];
    	f1(i,0,n)
    	cin>>d[i]>>h[i];
    	int flag=0;
    	f1(i,0,n)
    	{
    		if(d[i]>=x)
    		{
    			cout<<1<<endl;
    			flag=1;
    			break;
    		}
    	}
    	if(flag)
    		continue;
    	int ans=0;
    	int ansd=0;
    	f1(i,0,n)
    	{
    		if(d[i]>ansd)
    			ansd=d[i];
    		if(d[i]>h[i])
    		{
    			if(ans<d[i]-h[i])
    			{
    				ans=d[i]-h[i];
    				//ansd=d[i];
    			}
    			// else if(ans==d[i]-h[i])
    			// {
    			// 	if(d[i]>ansd)
    			// 	{
    			// 		ans=d[i]-h[i];
    			// 		ansd=d[i];
    			// 	}
    			// }
    		}
    	}
    	if(ans<=0)
    	{
    		cout<<-1<<endl;
    		continue;
    	}
    	//cout<<ans<<gp<<x<<endl;
    	// sort(ans.begin(), ans.end());
    	// int sum=ans[ans.size()-1];
    	x-=ansd;
    	
    	ans=(x+ans-1)/ans;
    	ans++;
    	cout<<ans<<endl;
    }
    return 0;
}