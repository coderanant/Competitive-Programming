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
    string s;
    cin>>s;
    int n=s.size();
    string ans;
    int flag=0;
    f1(i,0,n)
    {
    	int j=i,size=0;
    	while(1)
    	{
    		temp=j;
    		if(s[j]==s[i])
    			size++;
    		
    		else
    			break;
    		if(j==n)
    			break;
    		j++;
    	}
    	ans.pb(s[i]);
    	if(size>=2)
    	{
    		if(flag==0)
    		{
    			ans.pb(s[i]);
    			flag=1;
    		}
    		else if(flag==1)
    			flag=0;
    	}
    	else if(flag==1)
    		flag=0;
    	i=temp-1;
    	//cout<<i<<gp<<ans<<endl;
    }
    cout<<ans;
    return 0;
}