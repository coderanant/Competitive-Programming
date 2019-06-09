/*coderansnansnt*/
//The solution is too cumbersome and lengthy. Many better approaches exist.
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
    int h,w;
    cin>>h>>w;
    vector<string> a(h);
    f1(i,0,h)
    {
    	cin>>a[i];
    }
    int an[h][w];
    f1(i,0,h)
    {
    	f1(j,0,w)
    	{
    		if(a[i][j]=='#')
    			an[i][j]=0;
    		else
    			an[i][j]=1;
    	}
    }
    int ans[h][w];
    f1(i,0,h)
    {
    	f1(j,0,w)
    	{
    		if(an[i][j]==0)
    			ans[i][j]=0;
    		else
    			ans[i][j]=1;
    	}
    }

    f1(i,0,h)
    {
    	f1(j,1,w)
    	{
    		if(an[i][j]!=0&&an[i][j-1]!=0)
    		{
    			an[i][j]=an[i][j]+an[i][j-1];
    		}
    	}
    	f2(j,w-2,0)
    	{
    		if(ans[i][j]!=0&&ans[i][j+1]!=0)
    		{
    			ans[i][j]=ans[i][j]+ans[i][j+1];
    		}
    	}
    }
    // f1(i,0,h)
    // {
    // 	f1(j,0,w)
    // 	{
    // 		if(an[i][j]!=0)
    // 			cout<<an[i][j]+ans[i][j]-1;
    // 		else
    // 			cout<<an[i][j]+ans[i][j];
    // 	}
    // 	cout<<endl;
    // }
    int h1[h][w];
    int h2[h][w];
    f1(i,0,h)
    {
    	f1(j,0,w)
    	{
    		if(an[i][j]==0)
    			h1[i][j]=h2[i][j]=0;
    		else
    			h1[i][j]=h2[i][j]=1;
    	}
    }
    f1(i,0,w)
    {
    	f1(j,1,h)
    	{
    		if(h1[j][i]!=0&&h1[j-1][i]!=0)
    		{
    			h1[j][i]=h1[j][i]+h1[j-1][i];
    		}
    	}
    	f2(j,h-2,0)
    	{
    		if(h2[j][i]!=0&&h2[j+1][i]!=0)
    		{
    			h2[j][i]=h2[j][i]+h2[j+1][i];
    		}
    	}
    }
    int s=0;
    f1(i,0,h)
    {
    	f1(j,0,w)
    	{
    		s=max(s,an[i][j]+ans[i][j]+h1[i][j]+h2[i][j]-3);
    	}
    }
    cout<<s;
    return 0;
}