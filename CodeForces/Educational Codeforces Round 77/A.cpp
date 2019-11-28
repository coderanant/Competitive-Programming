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

    int n;
    cin>>n;
    while(n--)
    {
    	int c,sum;
    	cin>>c>>sum;
    	int num=sum/c;
    	int ans[c];
    	f1(i,0,c)
    	{
    		ans[i]=sum/c;
    	}
    	sum%=c;
    	f1(i,0,c)
    	{
    		if(sum==0)
    			break;
    		ans[i]++;
    		sum--;
    	}
    	int lala=0;
    	f1(i,0,c)
    	{
    		lala+=(ans[i]*ans[i]);
    	}
    	cout<<lala<<endl;
    }
    return 0;
}