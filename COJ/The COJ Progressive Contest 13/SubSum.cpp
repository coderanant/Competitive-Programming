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
    while(1)
	{
		if(cin.eof())
			break;
		int n,s;
		cin>>n>>s;
		if(cin.eof())
			break;
		int a[n];
		f1(i,0,n)
		cin>>a[i];
		int start=0,sum=0;
		f1(i,0,n)
		{
			sum+=a[i];
			while(sum>s)
			{
				sum-=a[start];
				start++;
			}
			//cout<<start<<gp<<i<<gp<<sum<<endl;
			if(sum==s)
			{
				cout<<start+1<<gp<<i+1<<endl;
				break;
			}
		}
		if(i==n)
		cout<<-1<<endl;
	}
    return 0;
}