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
    int x,y,z;
    cin>>x>>y>>z;
    if(x<y)
    {
    	if(x+z>=y)
    	{
    		cout<<'?';
    		return 0;
    	}
    	else
    	{
    		cout<<'-';
    		return 0;
    	}
    }
    else if(y<x)
    {
    	if(y+z>=x)
    	{
    		cout<<'?';
    		return 0;
    	}
    	else
    	{
    		cout<<'+';
    		return 0;
    	}
    }
    else if(x==y&&z>0)
    {
    	cout<<'?';
    }
    else
    {
    	cout<<0;
    }
    return 0;
}