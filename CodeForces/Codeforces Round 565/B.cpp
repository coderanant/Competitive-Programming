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
    	int n;
    	cin>>n;
    	int x=0,y=0,z=0;
    	f1(i,0,n)
    	{
    		cin>>temp;
    		if(temp%3==0)
    			z++;
    		else if(temp%3==2)
    			y++;
    		else
    			x++;
    	}
    	int ans=z;
    	if(x<y)
    	{
    		ans+=x;
    		y-=x;
    		ans+=(y/3);
    	}
    	else
    	{
    		ans+=y;
    		x-=y;
    		ans+=(x/3);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}