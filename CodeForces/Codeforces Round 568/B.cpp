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
    while(n--)
    {
    	string s,t;
    	cin>>s>>t;
    	//cout<<s<<t;
    	int s1=0,s2=0;
    	int n=s.size();
    	int m=t.size();
    	char las='/';
    	int ans=1;
    	f1(i,0,n)
    	{
    		f1(j,s2,m)
    		{
    			if(j!=0)
    			{
    				//cout<<t[j]<<gp<<s[i];
    				if(t[j]==s[i])
    				{
    					s2=j+1;
    					break;
    				}
    				else if(t[j]!=t[j-1])
    				{
    					ans=0;
    				}
    			}
    			if(j==0)
    			{
    				//cout<<1;
    				if(t[j]==s[i])
    				{
    					s2=j+1;
    					break;
    				}
    				else
    				{
    					ans=0;
    				}
    			}
    		}
    		if(j==m)
    		{
    			ans=0;
    		}
    		//cout<<s2<<gp;
    		if(ans==0)
    			break;
    	}
    	//cout<<s2<<endl;
    	f1(j,s2,m)
    	{
    		if(t[j]!=t[j-1])
    		{
    			ans=0;
    			break;
    		}
    	}
    	if(i==n&&ans)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}