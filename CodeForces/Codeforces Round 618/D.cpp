/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define ld long double
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

    int x[n],y[n];
    f1(i,0,n)
    	cin>>x[i]>>y[i];

    if(n%2)
    {
    	cout<<"NO";
    	return 0;
    }

    f1(i,0,n/2)
    {
    	if(y[(n/2+i+1)%n]-y[n/2+i] != y[i]-y[i+1] || x[(n/2+i+1)%n]-x[n/2+i] != x[i]-x[i+1])
    	{
    		cout<<"NO";
    		return 0;
    	}
    }
    cout<<"YES";
    return 0;
}