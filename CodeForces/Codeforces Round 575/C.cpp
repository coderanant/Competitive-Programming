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
    	int a[n][6];
    	f1(i,0,n)
    	{
    		f1(j,0,6)
    		cin>>a[i][j];
    	}
    	int xlow=-100000,xhigh=100000,ylow=-100000,yhigh=100000;
    	f1(i,0,n)
    	{
    		if(a[i][2]==0)
    		{
    			if(a[i][0]>xlow)
    				xlow=a[i][0];
    		}
    		if(a[i][3]==0)
    		{
    			if(a[i][1]<yhigh)
    				yhigh=a[i][1];
    		}
    		if(a[i][4]==0)
    		{
    			if(a[i][0]<xhigh)
    				xhigh=a[i][0];
    		}
    		if(a[i][5]==0)
    		{
    			if(a[i][1]>ylow)
    				ylow=a[i][1];
    		}
    	}
    	if(xlow>xhigh||ylow>yhigh)
    	{
    		cout<<0<<endl;
    	}
    	else
    	{
    		cout<<1<<gp<<xlow<<gp<<ylow<<endl;
    	}
    }
    return 0;
}