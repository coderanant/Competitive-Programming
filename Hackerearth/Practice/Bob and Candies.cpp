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


vector<int> ans;
vector<int> temp;

void vcopy()
{
	int k;
	ans.clear();
	f1(k,0,temp.size())
	ans.pb(temp[k]);
}

bool vcomp()
{
    if(temp.size()!=ans.size())
    return temp.size()<ans.size();
    
	int k;
	f1(k,0,temp.size())
	{
		if(temp[k]<ans[k])
			return true;
		else if(ans[k]<temp[k])
			return false;
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
    int n,x;
    cin>>n>>x;
    
    int t,i;
    f1(i,0,n)
    ans.pb(9);
    //cout<<ans<<endl;
    int arr[n];
    f1(i,0,n)
    cin>>arr[i];

    int flag=0;
    for(int i=0;i<(1<<n);i++)
    {
    	temp.clear();
    	int tempsum=0;
    	for(int j=0;j<n;j++)
    	{
    		if(i&(1<<j))
    		{
    			temp.pb(j);
    			tempsum+=arr[j];
    		}
    	}
    	// int j;
    	// f1(j,0,temp.size())
    	// cout<<temp[i];

    	if(tempsum==x)
    	{
    		if(vcomp())
    		{
    			flag=1;
    			vcopy();
    		}
    	}
    }

    if(flag)
    {
    	f1(i,0,ans.size())
    	cout<<ans[i]+1<<gp;
    }
    else
    	cout<<-1;
    return 0;
}