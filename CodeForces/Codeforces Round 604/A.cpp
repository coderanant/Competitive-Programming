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
    	string s;
    	cin>>s;
    	int n=s.size();
    	f1(i,0,n-1)
    	{
    		if(s[i]=='?')
    		{
    			if(s[i+1]!='a'&&s[i-1]!='a')
    				s[i]='a';
    			else if(s[i+1]!='b'&&s[i-1]!='b')
    				s[i]='b';
    			else if(s[i+1]!='c'&&s[i-1]!='c')
    				s[i]='c';
    		}
    	}
    	if(s[n-1]=='?')
    	{
    		if(n>1)
    		{
    			if(s[n-2]!='a')
    				s[n-1]='a';
    			else if(s[n-2]!='b')
    				s[n-1]='b';
    			else if(s[n-2]!='c')
    				s[n-1]='c';
    		}
    		else
    		{
    			s[n-1]='a';
    		}
    	}
    	int flag=1;
    	f1(i,0,n-1)
    	{
    		if(s[i]==s[i+1])
    		{
    			flag=0;
    			break;
    		}
    	}
    	if(flag)
    		cout<<s<<endl;
    	else 
    		cout<<-1<<endl;
    }
    return 0;
}