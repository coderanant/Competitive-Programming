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

int n;
int value[101] , weight[101];


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    int w;
   	cin>>n>>w;
   	int i;
   	f1(i,0,n)
   	cin>>weight[i]>>value[i];
   	int ans[100001];
   	f1(i,0,100001)
   	{
   		ans[i]=mod;
   	}
   	ans[0]=0;
   	f1(i,0,n)
   	{
   		for(int j=100000-value[i];j>=0;j--)
   		{
   			ans[j+value[i]]=min(ans[j]+weight[i],ans[j+value[i]]);
   		}
   	}
   	int sum=0;
   	f1(i,0,100001)
   	{
   		if(ans[i]<=w)
   			sum=i;
   	}
   	cout<<sum;

    return 0;
}