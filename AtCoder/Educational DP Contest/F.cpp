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
    string s,t;
    cin>>s>>t;
    int n=s.length(), m=t.length();
    vector<vector<tuple<int,int,int>>> dp(n+1,vector<tuple<int,int,int>>(m+1));
    f1(i,0,n+1)
    {
    	f1(j,0,m+1)
    	{
    		dp[i][j]=make_tuple(0ll,0ll,0ll);
    	}
    }
    f1(i,1,n+1)
    {
    	f1(j,1,m+1)
    	{
    		if(s[i-1]==t[j-1])
    		{
    			dp[i][j]=make_tuple(get<0>(dp[i-1][j-1])+1,i-1,j-1);

    		}
    		else if(get<0>(dp[i][j-1]) > get<0>(dp[i-1][j]))
    			dp[i][j]=make_tuple(get<0>(dp[i][j-1]),i,j-1);
    		else
    			dp[i][j]=make_tuple(get<0>(dp[i-1][j]),i-1,j);
    	}
    }
    int ans=get<0>(dp[n][m]);
    int x=n,y=m;
    string final;
    ///cout<<ans<<endl;
    //ans=99;

    // f1(i,0,n+1)
    // {
    // 	f1(j,0,m+1)
    // 	cout<<get<0>(dp[i][j])<<gp<<get<1>(dp[i][j])<<gp<<get<2>(dp[i][j])<<gp<<gp<<gp;
    // 	cout<<endl;
    // }
    while(1)
    {
    	//cout<<x<<gp<<y<<endl;
    	if(get<1>(dp[x][y])<x&&get<2>(dp[x][y])<y)
    	{
    		final.pb(s[x-1]);
    		x--;
    		y--;
    		ans--;
    	}
    	else
    	{
    		//cout<<gp<<get<1>(dp[x][y])<<gp<<get<2>(dp[x][y])<<endl;
    		temp=get<1>(dp[x][y]);
    		y=get<2>(dp[x][y]);
    		x=temp;
    		//cout<<gp<<get<1>(dp[x][y])<<gp<<get<2>(dp[x][y])<<endl;
    	}
    	if(x==0||y==0)
    		break;
    }
    reverse(final.begin(),final.end());
    cout<<final;
    return 0;
}