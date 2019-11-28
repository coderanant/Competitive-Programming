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
    	int r,b,k;
    	cin>>r>>b>>k;
    	if(b<r)
    		swap(r,b);
    	int lcm=((r/__gcd(r,b))*b);
    	int lb=lcm/b;
    	int lr=lcm/r;
    	int ans;
    	if(lr!=lb)
    	{
    		lr--;
    		int diff=lr-lb;
    		ans=lr/lb;
    		if(lr>lb*ans)
    			ans++;
    	}
    	else
    		ans=1;
    	if(ans>=k)
    		cout<<"REBEL"<<endl;
    	else
    		cout<<"OBEY"<<endl;

    }
    return 0;
}