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
    	int arr[200001];
    	memset(arr,0,sizeof(arr));
    	f1(i,0,n)
    	{
    		arr[p[i]]=i;
    	}
    	int min=mod;
    	int max=-1;
    	int ans[200001];
    	memset(ans,0,sizeof(ans));
    	f1(i,1,n+1)
    	{
    		if(arr[i]<min)
    			min=arr[i];
    		if(arr[i]>max)
    			max=arr[i];
    		if(((max-min)+1)==i)
    		{
    			//cout<<i<<gp<<(max-min+1)<<endl;
    			ans[i]=1;
    		}
    	}
    	f1(i,1,n+1)
    	{
    		cout<<ans[i];
    	}
    	// f1(i,0,n)
    	// cout<<p[i];
    	cout<<endl;
    }
    return 0;
}