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

void f(std::vector<int> a)
{
	int ans=a[0];
	int n=a.size();
	f1(i,1,n)
	{
		ans=((ans|a[i])-a[i]);
		//cout<<(ans|a[i])<<gp<<a[i]<<gp<<ans<<endl;
	}
	cout<<ans<<endl;
	return ;
}
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
    vector<int> a(n+2);
    f1(i,1,n+1)
    cin>>a[i];

    int left[n+2],right[n+2];
    left[0]=0;
   	f1(i,1,n+1)
   	{
   		left[i]=left[i-1]|a[i];
   	}
   	right[n+1]=0;
   	f2(i,n,1)
   	{
   		right[i]=right[i+1]|a[i];
   	}

   	int ans=0,maxi=-1;
   	f1(i,1,n+1)
   	{

   		if((a[i]^(a[i]&(left[i-1]|right[i+1])))>maxi)
   		{
   			maxi=a[i]^(a[i]&(left[i-1]|right[i+1]));
   			ans=i;
   		}
   		// cout<<a[i]<<gp<<(a[i]^(a[i]&(left[i-1]|right[i+1])))<<endl;
   	}
   	cout<<a[ans]<<gp;
   	f1(i,1,n+1)
   	{
   		if(i!=ans)
   			cout<<a[i]<<gp;
   	}
    return 0;
}