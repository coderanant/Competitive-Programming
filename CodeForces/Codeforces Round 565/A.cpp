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
    	int ans=0;
    	while(n!=1)
    	{
    		if(n%2==0)
    			n/=2;
    		else if(n%3==0)
    		{
    			n*=2;
    			n/=3;
    		}
    		else if(n%5==0)
    		{
    			n*=4;
    			n/=5;
    		}
    		else
    			break;
    		ans++;
    	}
    	if(n==1)
    	{
    		cout<<ans<<endl;
    	}
    	else
    		cout<<-1<<endl;

    }
    return 0;
}