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
    	int n,k;
    	cin>>n>>k;
    	int a[n];
    	f1(i,0,n)
    	cin>>a[i];
    	if(k==1)
    	{
    		int pp=0;
    		f1(i,0,n)
    		pp+=a[i];
    		if(pp%2==1)
    		{
    			cout<<"YES\n"<<n<<endl;
    			
    		}
    		else
    			cout<<"NO"<<endl;
    		continue;
    	}
    	vector<int> ans;
     	f1(i,0,n)
    	{
    		if(ans.size()==k-1)
    		{
    			break;
    		}
    		if(a[i]%2==1)
    		{
    			ans.pb(i+1);
    			//cout<<i+1<<endl;
    		}
    	}
    	ans.pb(n);
    	// f1(i,0,ans.size())
    	// cout<<ans[i]<<gp;
    	if(ans.size()<k)
    	{
    		cout<<"NO\n";
    	}
    	else
    	{
    		temp=0;
    		f1(i,ans[k-2],n)
    		temp+=a[i];
    		if(temp%2==0)
    			cout<<"NO"<<endl;
    		else
    		{
    			cout<<"YES\n";
    			f1(i,0,ans.size())
    			cout<<ans[i]<<gp;
    			cout<<endl;
    		}


    	}
    }
    return 0;
}