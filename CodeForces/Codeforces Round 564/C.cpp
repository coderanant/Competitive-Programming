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
    int n;
    cin>>n;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    int a[n],b[n];
    f1(i,0,n)
	cin>>a[i];
    
    f1(i,0,n)
    cin>>b[i];

    int ans=0,fans=0;
    int flag=0;
   	f1(i,0,n)
   	{
   		if(flag==0)
   		{
   			if(b[i]==1)
   			{
   				flag=1;
   				fans=i;
   				ans=b[i]+1;
   			}
   		}
   		else
   		{
   			if(b[i]!=b[i-1]+1)
   				break;
   			ans=b[i]+1;
   		}
   	}
   	//cout<<ans<<gp<<fans<<gp<<i<<endl;
   	if(i==n)
   	{
   		queue<int> lassi;
   		set<int> pres;
   		f1(i,0,n)
   		{
   			if(a[i]!=0)
   			pres.insert(a[i]);
   		}
   		f1(i,0,n)
   		{
   			lassi.push(b[i]);
   		}
   		// for(auto &z : pres)
   		// 	cout<<z<<gp;
   		// f1(i,0,n)
   		// {
   			// int temp=lassi.front();
   			// cout<<temp<<gp;
   			// lassi.pop();
   			// lassi.push(temp);
   		// }
   		while(lassi.front()!=1)
   		{
   			if(pres.find(ans)!=pres.end())
   			{
   				lassi.push(ans);
   				pres.insert(lassi.front());
   				lassi.pop();
   				ans++;
   			}	
   			else
   			{
   				break;
   			}
   		}
   		if(lassi.front()==1)
   		{
   			ans=0;
   			while(lassi.empty()!=1)
   			{
   				if(lassi.front()!=ans+1)
   					break;
   				else
   				{
   					lassi.pop();
   					ans++;
   				}
   			}
   			if(lassi.empty()==1)
   			{
   				cout<<fans;
   				return 0;
   			}
   		}
   	}
   	ans=0;
   	//cout<<find<<gp<<lfind<<gp<<lfindi<<endl;
   	f1(i,0,n)
   	{
   		if(b[i]!=0)
   		ans=max(ans,i+2-b[i]);
   	}
   	ans+=n;
   	cout<<ans;
    return 0;
}