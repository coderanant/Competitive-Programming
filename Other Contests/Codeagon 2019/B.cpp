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

    int n;
    cin>>n;

   	string s;
   	cin>>s;
   	int arr[n];
   	f1(i,0,n)
   	{
   		arr[i]=s[i]-'0';
   	}

   	int temp[10];
   	memset(temp,0,sizeof(temp));
   	f1(i,0,n)
   	{
   		if(temp[arr[i]]++);
   	}
   	f1(i,0,10)
   	{
   		if(temp[i]%2==1)
   			break;
   	}
   	if(i==10)
   	{
   		cout<<-1;
   		return 0;
   	}
   	int ans[n][10];
   	f1(i,0,n)
   	{
   		f1(j,0,10)
   		ans[i][j]=mod;
   	}
   	ans[n-1][arr[n-1]]=0;
   	f2(i,n-2,0)
   	{
   		f1(j,0,10)
   		{
   			ans[i][j]=ans[i+1][j]+1;
   		}
   		ans[i][arr[i]]=0;
   	}
   	int sum=mod;
   	f1(i,0,n)
   	{
   		int pp=0;
   		f1(j,0,10)
   		{
   			if(temp[j]%2==1)
   			{
   				pp=max(pp,ans[i][j]);
   			}
   		}
   		sum=min(sum,pp);
   	}
   	cout<<sum<<endl;

    return 0;
}