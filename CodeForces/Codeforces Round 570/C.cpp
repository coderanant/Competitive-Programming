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
    	int k,n,a,b;
    	cin>>k>>n>>a>>b;
    	if(k-(b*n)<=0)
    	{
    		cout<<-1<<endl;
    	}
    	else
    	{
    		int x=k-(n*b);
    		x/=(a-b);
    		if(x==((k-n*b+a-b-1)/(a-b)))
    			x--;
    		if(x<0)
    			x=0;
    		cout<<min(n,x)<<endl;
    	}
    }
    return 0;
}