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
    	int low=max(0ll,a[0]-k);
    	int high=a[0]+k;
    	f1(i,1,n)
    	{
    		if(a[i]+k<low||a[i]-k>high)
    		{
    			cout<<-1<<endl;
    			break;
    		}
    		low=max(low,a[i]-k);
    		high=min(high,a[i]+k);
    	}
    	if(i==n)
    		cout<<high<<endl;
    }
    return 0;
}