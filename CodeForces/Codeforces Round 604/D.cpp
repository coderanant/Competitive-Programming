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

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p=a,q=b,r=c,s=d;
    int sum=a+b+c+d;
    vector<int> ans;
    if(p>0)
    {
    	ans.pb(0);
	    a--;
	    while(1)
	    {
	    	int flag=0;
	    	if(ans[ans.size()-1]==0)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==1)
	    	{
	    		if(a>0)
	    		{
	    			ans.pb(0);
	    			a--;
	    			flag=1;
	    		}
	    		else if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==2)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    		else if(d>0)
	    		{
	    			ans.pb(3);
	    			d--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==3)
	    	{
	    		if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	if(flag==0)
	    		break;
	    }
	    int flag=1;
	    if(ans.size()!=sum)
	    	flag=0;
	    if(flag==1)
	    {
	    	f1(i,0,sum-1)
		    {
		    	if(abs(ans[i]-ans[i+1])!=1)
		    	{
		    		flag=0;
		    		//return 0;
		    	}
		    }
		}
	    if(flag==1)
	    {
	    	cout<<"YES"<<endl;
		    f1(i,0,sum)
		    cout<<ans[i]<<gp;
		    return 0;
	    }
	 //    f1(i,0,sum)
		//     cout<<ans[i]<<gp;
		// cout<<endl;
    }
    

    if(q>0)
    {
    	a=p;
	    b=q;
	    c=r;
	    d=s;
	    ans.clear();
	    ans.pb(1);
	    b--;
	    while(1)
	    {
	    	int flag=0;
	    	if(ans[ans.size()-1]==0)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==1)
	    	{
	    		if(a>0)
	    		{
	    			ans.pb(0);
	    			a--;
	    			flag=1;
	    		}
	    		else if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==2)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    		else if(d>0)
	    		{
	    			ans.pb(3);
	    			d--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==3)
	    	{
	    		if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	if(flag==0)
	    		break;
	    }
	    int flag=1;
	    if(ans.size()!=sum)
	    	flag=0;
	    if(flag==1)
	    {
	    	f1(i,0,sum-1)
		    {
		    	if(abs(ans[i]-ans[i+1])!=1)
		    	{
		    		flag=0;
		    		//return 0;
		    	}
		    }
		}
	    if(flag==1)
	    {
	    	cout<<"YES"<<endl;
		    f1(i,0,sum)
		    cout<<ans[i]<<gp;
		    return 0;
	    }
	 //    f1(i,0,sum)
		//     cout<<ans[i]<<gp;
		// cout<<endl;
    }
    



    if(r>0)
    {
    	a=p;
	    b=q;
	    c=r;
	    d=s;
	    ans.clear();
	    ans.pb(2);
	    c--;
	    while(1)
	    {
	    	int flag=0;
	    	if(ans[ans.size()-1]==0)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==1)
	    	{
	    		if(a>0)
	    		{
	    			ans.pb(0);
	    			a--;
	    			flag=1;
	    		}
	    		else if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==2)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    		else if(d>0)
	    		{
	    			ans.pb(3);
	    			d--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==3)
	    	{
	    		if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	if(flag==0)
	    		break;
	    }
	    int flag=1;
	    if(ans.size()!=sum)
	    	flag=0;
	    if(flag==1)
	    {
	    	f1(i,0,sum-1)
		    {
		    	if(abs(ans[i]-ans[i+1])!=1)
		    	{
		    		flag=0;
		    		//return 0;
		    	}
		    }
		}
	    if(flag==1)
	    {
	    	//cout<<1<<gp<<endl;
	    	cout<<"YES"<<endl;
		    f1(i,0,sum)
		    cout<<ans[i]<<gp;
		    return 0;
	    }
	 //    f1(i,0,sum)
		//     cout<<ans[i]<<gp;
		// cout<<endl;
    }


    if(s>0)
    {
    	a=p;
	    b=q;
	    c=r;
	    d=s;
	    ans.clear();
	    ans.pb(3);
	    d--;
	    while(1)
	    {
	    	int flag=0;
	    	if(ans[ans.size()-1]==0)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==1)
	    	{
	    		if(a>0)
	    		{
	    			ans.pb(0);
	    			a--;
	    			flag=1;
	    		}
	    		else if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==2)
	    	{
	    		if(b>0)
	    		{
	    			ans.pb(1);
	    			b--;
	    			flag=1;
	    		}
	    		else if(d>0)
	    		{
	    			ans.pb(3);
	    			d--;
	    			flag=1;
	    		}
	    	}
	    	else if(ans[ans.size()-1]==3)
	    	{
	    		if(c>0)
	    		{
	    			ans.pb(2);
	    			c--;
	    			flag=1;
	    		}
	    	}
	    	if(flag==0)
	    		break;
	    }
	    int flag=1;
	    if(ans.size()!=sum)
	    	flag=0;
	    if(flag==1)
	    {
	    	f1(i,0,sum-1)
		    {
		    	if(abs(ans[i]-ans[i+1])!=1)
		    	{
		    		flag=0;
		    		//return 0;
		    	}
		    }
		}
	    if(flag==1)
	    {
	    	cout<<"YES"<<endl;
		    f1(i,0,sum)
		    cout<<ans[i]<<gp;
		    return 0;
	    }
    }

    cout<<"NO";
    return 0;
}