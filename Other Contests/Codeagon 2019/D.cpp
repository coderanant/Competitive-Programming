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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	// cout<<n<<k<<endl;
    	int a[n];
    	f1(i,0,n)
    	cin>>a[i];

    	vector<pair<int,int>> v;
    	f1(i,0,n)
    	{
    		if(a[i]%k==0)
    		{
    			temp=a[i];
    			v.pb(mp(temp,i));
    			while(temp%k==0)
    			{
    				temp/=k;
    				v.pb(mp(temp,i));
    			}
    		}
    		else
    		{
    			v.pb(mp(a[i],i));
    			v.pb(mp(a[i]*k,i));
    		}
    	}
    	sort(v.begin(),v.end());
    	// f1(i,0,v.size())
    	// {
    	// 	f1(j,i+1,v.size())
    	// 	{
    	// 		if(v[j].ss!=v[i].ss)
    	// 		{
    	// 			ans=min(ans,v[j].ff-v[i].ff);
    	// 			break;
    	// 		}
    	// 	}
    	// }
    	int look[n];
    	memset(look,0,sizeof(look));
    	int freq=0;
    	int ans=mod;
    	int i=0,j=0;
    	freq=1;
    	look[v[0].ss]=1;
    	// f1(i,0,v.size())
    	// cout<<v[i].ff<<gp<<v[i].ss<<endl;
    	i=j=0;
    	while(1)
    	{
    		//cout<<i<<gp<<j<<gp<<freq<<endl;
    		if(freq==n)
    		{
    			ans=min(ans,v[j].ff-v[i].ff);
    			i++;
    			look[v[i-1].ss]--;
    			if(look[v[i-1].ss]==0)
    			freq--;
    			//cout<<ans<<endl;
    		}
    		else if(freq<n)
    		{
    			j++;
    			
    				look[v[j].ss]++;
    				//freq++;
    			if(look[v[j].ss]==1)
    				freq++;
    		}
    		if(j==v.size()-1)
    			break;
    	}

    	cout<<ans<<endl;

    }
    return 0;
}