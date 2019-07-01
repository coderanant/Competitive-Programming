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
    int q;
    cin>>q;
    while(q--)
    {
    	int n;
    	cin>>n;
    	int a[n+1];
    	memset(a,0,(n+1)*sizeof(int));
    	f1(i,0,n)
    	{
    		cin>>temp;
    		a[temp]++;
    	}
    	// f1(i,0,n+1)
    	// cout<<a[i]<<endl;
    	sort(a,a+n+1);
    	// f1(i,0,n+1)
    	// cout<<a[i]<<endl;
    	int ans=a[n],las=a[n];
    	//cout<<ans<<gp<<las<<endl;
    	f2(i,n-1,0)
    	{
    		if(a[i]==0||las==1)
    			break;
    		else
    		{
    			ans+=min(las-1,a[i]);
    			las=min(las-1,a[i]);
    		}
    		//cout<<ans<<gp<<las<<endl;
    	}
    	cout<<ans<<endl;
    }
    return 0;
}