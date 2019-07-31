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

bool prime[100001];
vector<int> primes;
void sieve()
{
	memset(prime,true,100001*sizeof(bool));
	prime[0]=prime[1]=false;
	f1(i,2,100001)
	{
		if(prime[i]==true)
		{
			for(j=i*i;j<100001;j+=i)
				prime[j]=false;
		}
	}
	f1(i,0,100001)
	{
		if(prime[i])
			primes.pb(i);
	}
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    sieve();
    int n;
    cin>>n;
    int a[n+1];
    f1(i,1,n+1)
    cin>>a[i];
    int sum=0;
    vector<pair<int,int>> ans;
    int pos[n+1];
    f1(i,1,n+1)
    {
    	pos[a[i]]=i;
    }
    f1(i,1,n+1)
    {
    	while(a[i]!=i)
    	{
    		sum++;
    		auto it = lower_bound(primes.begin(),primes.end(),pos[i]-i+1);
    		int temp=(*it);
    		if(temp!=(pos[i]-i+1))
    			it--;
    		temp=*it;
    		int la=pos[i]-temp;
    		la++;
    		//cout<<pos[i]<<gp<<la<<endl;
    		swap(pos[i],pos[a[la]]);
    		ans.pb(mp(pos[i],pos[a[la]]));
    		swap(a[pos[i]],a[pos[a[la]]]);
    		//cout<<i<<gp<<temp<<gp<<pos[i]<<gp<<pos[a[la]]<<endl;
    	}
    }
    cout<<sum<<endl;
    f1(i,0,sum)
    {
    	cout<<ans[i].ff<<gp<<ans[i].ss<<endl;
    }
    return 0;
}