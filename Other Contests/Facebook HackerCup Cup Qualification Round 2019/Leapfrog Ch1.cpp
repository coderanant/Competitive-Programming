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
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    f1(j,1,t+1)
    {
    	string l;
    	cin>>l;
    	int n=l.size();k
    	int lil=0;
    	f1(i,0,n)
    	{
    		if(l[i]=='B')
    			lil++;
    	}
    	if(lil>=(n)/2&&lil<n-1)
    		cout<<"Case #"<<j<<": Y"<<endl;
    	else
    		cout<<"Case #"<<j<<": N"<<endl;
    }
    return 0;
}