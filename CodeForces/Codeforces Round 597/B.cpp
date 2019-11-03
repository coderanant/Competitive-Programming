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
    	int a,b,c;
    	cin>>a>>b>>c;
    	string s;
    	cin>>s;
    	string an;
    	f1(i,0,n)
    	an.pb('.');
    	int ans=0;
    	f1(i,0,n)
    	{
    		if(s[i]=='R')
    		{
    			if(b>0)
    			{
    				ans++;
    				b--;
    				an[i]='P';
    			}
    		}
    		else if(s[i]=='P')
	    	{
	    		if(c>0)
	    		{
	    			ans++;
	    			c--;
	    			an[i]='S';
	    		}
	    	}
	    	else if(s[i]=='S')
	    	{
	    		if(a>0)
	    		{
	    			ans++;
	    			a--;
	    			an[i]='R';
	    		}
	    	}
    	}
    	f1(i,0,n)
    	{
    		if(an[i]=='.')
    		{
    			if(a>0)
    			{
    				an[i]='R';
    				a--;
    			}
    			else if(b>0)
    			{
    				an[i]='P';
    				b--;
    			}
    			else if(c>0)
    			{
    				an[i]='S';
    				c--;
    			}
    		}
    	}
    	if(ans>=(n+1)/2)
    	{
    		cout<<"YES"<<endl;
    		cout<<an<<endl;
    	}
    	else
    		cout<<"NO"<<endl;

    }
    return 0;
}