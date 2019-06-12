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
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    f1(i,0,n)
    {
    	cin>>a[i];
    }
    // f1(i,0,n)
    // cout<<a[i]<<endl;
    int flag=0;
    int ans=0;
    f1(i,1,n-1)
    {
    	f1(j,1,m-1)
    	{
    		if(a[i][j]=='*')
    		{
    			if(a[i-1][j]=='*'&&a[i+1][j]=='*'&&a[i][j-1]=='*'&&a[i][j+1]=='*')
    			{
    				a[i][j]='.';
    				flag=1;
    				int k;
    				f1(k,j+1,m)
    				{
    					if(a[i][k]!='*')
    						break;
    					a[i][k]='.';
    				}
    				f2(k,j-1,0)
    				{
    					if(a[i][k]!='*')
    						break;
    					a[i][k]='.';
    				}
    				f1(k,i+1,n)
    				{
    					if(a[k][j]!='*')
    						break;
    					a[k][j]='.';
    				}
    				f2(k,i-1,0)
    				{
    					if(a[k][j]!='*')
    						break;
    					a[k][j]='.';
    				}
    				break;
    			}
    		}
    	}
    	if(flag)
    		break;
    }
    int jf=0;
    f1(i,0,n)
    {
    	f1(j,0,m)
    	{
    		if(a[i][j]=='*')
    		{
    			flag=0;
    			jf=1;
    			break;
    		}
    	}
    	if(jf)
    		break;
    }
    if(flag)
    	cout<<"YES";
    else
    	cout<<"NO";
    return 0;
}