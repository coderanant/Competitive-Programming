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
    int n;
    cin>>n;
    int arr[]={4,8,15,16,23,42};
    // f1(i,0,6)
    // cout<<arr[i];
    int ans=0;
    int a[6];
    memset(a,0,sizeof(a));
    f1(i,0,n)
    {
    	cin>>temp;
    	f1(j,0,6)
    	{
    		if(temp==arr[j])
    		{
    			a[j]++;
    			break;
    		}
    	}
    	if(j==6)
    	{
    		ans++;
    	}
    	else
    	{
    		f1(j,1,6)
    		{
    			if(a[j]>a[j-1])
    			{
    				ans++;
    				a[j]--;
    			}
    		}
    	}
    }
    int z=a[5];
    f1(i,0,6)
    {
    	ans+=(a[i]-z);
    }
    cout<<ans;
    return 0;
}