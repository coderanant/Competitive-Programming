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
    int a[n];
    f1(i,0,n)
    cin>>a[i];
    //sort(a,a+n);
    if(n==1)
    {
    	if(a[0]<0)
    	{
    		a[0]=((-1)*a[0])-1;
    	}
    	cout<<a[0];
    	return 0;
    }
    f1(i,0,n)
    {
    	if(a[i]==0)
    		a[i]=-1;
    }
    if(n%2==0)
    {
    	f1(i,0,n)
    	{
    		if(a[i]>0)
    		{
    			a[i]=((-1)*a[i])-1;
    		}
    	}
    	f1(i,0,n)
    	cout<<a[i]<<gp;
    	return 0;
    }
    else
    {
    	int minpos=-1,minin=-1;
    	f1(i,0,n)
    	{
    		if(a[i]>0)
    		{
    			if(a[i]>minpos)
    			{
    				minpos=a[i];
    				minin=i;
    			}
    		}
    	}
    	//cout<<minin<<endl;
    	if(minin!=-1)
    	{
    		f1(i,0,n)
    		{
    			if(i!=minin)
    			{
    				if(a[i]>0)
    				a[i]=((-1)*a[i])-1;
    			}
    		}
    		f1(i,0,n)
    		{
    			cout<<a[i]<<gp;
    		}
    		return 0;
    	}
    	else
    	{
    		int minneg=1;
    		minin=-1;
    		f1(i,0,n)
    		{
    			if(a[i]<0)
    			{
    				if(a[i]<minneg)
    				{
    					minneg=a[i];
    					minin=i;
    				}
    			}
    		}
    		if(minneg!=-1)
    		{
    			a[minneg]=((-1)*a[minneg])-1;
    			f1(i,0,n)
    			cout<<a[i]<<gp;
    			return 0;
    		}
    		else
    		{
    			a[0]=((-1)*a[0])-1;
    			f1(i,0,n)
    			cout<<a[i]<<gp;
    			return 0;
    		}
    	}
    }
    return 0;
}