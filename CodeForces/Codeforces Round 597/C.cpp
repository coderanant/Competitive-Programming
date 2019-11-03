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

    string s;
    cin>>s;
    int n=s.size();
    f1(i,0,n)
    {
    	if(s[i]=='m'||s[i]=='w')
    	{
    		cout<<0<<endl;
    		return 0;
    	}
    }
    int fib[100001];
    fib[0]=fib[1]=1;
    f1(i,2,100001)
    {
    	fib[i]=fib[i-1]+fib[i-2];
    	fib[i]%=mod;
    }
    int cur=0;
    int ans=1;
    int flag=2;
    s.pb('.');
    f1(i,0,n+1)
    {
    	if(flag==0)
    	{
    		if(s[i]=='n')
    		{
    			cur++;
    		}
    		else
    		{
    			ans*=fib[cur];
    			ans%=mod;
    			flag=2;
    			cur=0;
    			if(s[i]=='u')
    			{
    				cur=1;
    				flag=1;
    			}
    		}
    	}
    	else if(flag==1)
    	{
    		if(s[i]=='u')
    		{
    			cur++;
    		}
    		else
    		{
    			ans*=fib[cur];
    			ans%=mod;
    			flag=2;
    			cur=0;
    			if(s[i]=='n')
    			{
    				cur=1;
    				flag=0;
    			}
    		}
    	}
    	else
    	{
    		if(s[i]=='n')
    		{
    			cur++;
    			flag=0;
    		}
    		else if(s[i]=='u')
    		{
    			cur++;
    			flag=1;
    		}
    	}
    }
    cout<<ans<<endl;
    return 0;
}