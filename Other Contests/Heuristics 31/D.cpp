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

int n,m;
string s;

bool check(int k)
{
	int arr[26];
	memset(arr,0,26*sizeof(int));
	int sum=0;
	f1(i,0,k)
	{
		arr[s[i]-'a']++;
	}
	f1(i,k,n)
	{
		if(arr[s[i]-'a']!=0)
		{
			arr[s[i]-'a']++;
		}
		arr[s[i-k]-'a']--;
	}

	f1(i,0,26)
	{
		if(arr[i]>0)
			sum++;
	}
	//cout<<sum<<en;
	if(sum>=m)
		return true;

	return false;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	#ifndef ONLINE_JUDGE
   		freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
   		freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
   	#endif

   	cin>>n>>m;
   	cin>>s;

   	int low=1,high=n;

   	while(low<high)
   	{
   		int mid=(low+high)/2;
   		if(check(mid))
   		{
   			high=mid;
   		}
   		else
   		{
   			low=mid+1;
   		}
   	}
   	if(check(low))
   	{
   		cout<<low;
   	}
   	else
   		cout<<-1;
    return 0;
}