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
ll temp;

int arr[1001][1001];
int troop[1001][1001];
int n,m;

void bfs(int x, int y,int count)
{
	int plus[]={-1,0,+1};
	queue<pair<int,int>> q;
	q.push({x,y});
	troop[x][y]=count;
	while(!q.empty())
	{
		int a,b;
		a=q.front().ff;
		b=q.front().ss;
		q.pop();
		int i,j;
		f1(i,0,3)
		{
			f1(j,0,3)
			{
				int c=a+plus[i];
				int d=b+plus[j];
				//cout<<count<<gp<<c<<gp<<d<<endl;
				if(c==a && d==b)
				{
					continue;
				}
				if(c>=1 && c<=n && d>=1 && d<= m)
				{
					if(arr[c][d]==1 && troop[c][d]==0)
					{
						q.push({c , d});
						troop[c][d] = count;
					}
				}
			}
		}
	}
}
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
    	cin>>n>>m;
    	memset(arr,0,sizeof(arr));
    	int i,j;
    	f1(i,1,n+1)
    	{
    		f1(j,1,m+1)
    		cin>>arr[i][j];
    	}
    	
    	memset(troop,0,sizeof(troop));
    	int count=1;
    	f1(i,1,n+1)
    	{
    		f1(j,1,m+1)
    		{
    			if(arr[i][j]==1&&troop[i][j]==0)
    			{
    				bfs(i,j,count);
    				count++;
    			}
    		}
    	}
    	// f1(i,1,n+1)
    	// {
    	// 	f1(j,1,m+1)
    	// 	cout<<troop[i][j]<<" \n"[j==m];
    	// }
    	int ans1=0;
    	f1(i,1,n+1)
    	{
    		f1(j,1,m+1)
    		ans1=max(ans1,troop[i][j]);
    	}
    	int ans2[ans1+1];
    	cout<<ans1<<" ";
    	memset(ans2,0,sizeof(ans2));
    	f1(i,1,n+1)
    	{
    		f1(j,1,m+1)
    		{
    			if(troop[i][j]!=0)
    			{
    				ans2[troop[i][j]]++;
    			}
    		}
    	}
    	int fans=0;
    	f1(i,1,ans1+1)
    	{
    		fans=max(fans,ans2[i]);
    	}
    	cout<<fans<<endl;

    }
    return 0;
}