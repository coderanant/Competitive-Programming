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
    
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int p[n];
    	f1(i,0,n)
    	cin>>p[i];
    	int ans[n+1];
    	memset(ans,0,sizeof(ans));
    	int flag=0;
    	ans[0]=0;
    	int g=1,s=0,b=0;
    	f1(i,1,n/2)
    	{
    		if(p[i]<p[i-1])
    		{
    			if(flag==1)
    			{
    				if(s<=g)
    					flag--;
    			}
    			flag++;
    			if(flag>2)
    				flag=2;
    		}
    		ans[i]=flag;
    		if(flag==0)
    			g++;
    		else if(flag==1)
    			s++;
    		else if(flag==2)
    			b++;
    	}
    	int mm=p[n/2];
    	f1(i,0,n/2)
    	{
    		if(p[i]==mm)
    		{
    			b--;
    			ans[i]=0;
    		}
    	}
    	//cout<<g<<gp<<s<<gp<<b<<"dddd"<<endl;
    	flag=0;
    	// f1(i,0,n)
    	// cout<<ans[i]<<gp;
    	// cout<<endl;
    	if((g>0&&s>0)&&b>0)
    	{
    		if(g<s&&g<b)
    		{
    			flag=1;
    			cout<<g<<gp<<s<<gp<<b<<endl;
    		}
    	}
    	if(flag==0)
    	{
    		cout<<"0 0 0\n";
    	}
    }
    return 0;
}