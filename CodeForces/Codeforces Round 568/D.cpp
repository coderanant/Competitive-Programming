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

multiset<int> ans;
int b[200001];
int ab[200001];
int n;

int check(int a, int c)
{
	multiset<int> lel(ans.begin(),ans.end());
	lel.erase(lel.find(a));
	f1(i,0,n-2)
	{
		a+=c;
		if(lel.find(a)==lel.end())
		{
			return 0;
		}
		else
		{
			lel.erase(lel.find(a));
		}
	}
	int z=(*(lel.begin()));
	//cout<<z<<endl;

	f1(i,0,n)
	{
		if(ab[i]==z)
			return i+1;
	}
	return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    cin>>n;
    f1(i,0,n)
    cin>>b[i];
	f1(i,0,n)
	ans.insert(b[i]);
	f1(i,0,n)
	ab[i]=b[i];
	sort(b,b+n);

	// f1(i,0,n)
	// cout<<b[i]<<gp;
	if(n==2)
	{
		cout<<1;
		return 0;
	}
	temp=check(b[0],b[1]-b[0]);
	if(temp!=0)
	{
		cout<<temp;
		return 0;
	}
	temp=check(b[0],b[2]-b[0]);
	if(temp!=0)
	{
		cout<<temp;
		return 0;
	}
	temp=check(b[1],b[2]-b[1]);
	if(temp!=0)
	{
		cout<<temp;
		return 0;
	}
	temp=check(b[n-1],b[n-2]-b[n-1]);
	if(temp!=0)
	{
		cout<<temp;
		return 0;
	}
	temp=check(b[n-1],b[n-3]-b[n-1]);
	if(temp!=0)
	{
		cout<<temp;
		return 0;
	}
	temp=check(b[n-2],b[n-3]-b[n-2]);
	if(temp!=0)
	{
		cout<<temp;
		return 0;
	}
	cout<<-1;
    return 0;
}