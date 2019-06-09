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

int prime[2750132];
vector<int> primes;
//int badaprime[1000001];
void solve()
{
	prime[0]=prime[1]=-1;
	for(i=2;i<2750132;i++)
	{
		if(prime[i]==0)
		{
			for(j=2*i;j<2750132;j+=i)
			{
				if(prime[j]==0)
					prime[j]=i;
			}
		}
	}
	f1(i,2,2750132)
	{
		if(prime[i]==0)
			primes.pb(i);
	}
	// f1(i,2,1000001)
	// {
	// 	if(prime[i]!=0)
	// 	{
	// 		badaprime[prime[i]]=i;
	// 	}
	// }
}
int binarySearch(int x) 
{ 
	int l=0,r=primes.size()-1;
    while (l <= r) { 
        int m = l + (r - l) / 2; 
        if (primes[m] == x) 
            return m; 
        if (primes[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1; 
} 
int bmaihai[2750132];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    solve();
    // f1(i,0,1000)
    // {
    // 	cout<<prime[i]<<gp;
    // }
    // cout<<endl;
    // f1(i,0,1000)
    // cout<<primes[i]<<gp;
    int n;
    cin>>n;
    int b[2*n];
    f1(i,0,2*n)
    {
    	cin>>b[i];
    }
    //cout<<primes.size();
    //memset(bmaihai,0,sizeof(bmaihai));
    f1(i,0,2*n)
    {
    	bmaihai[b[i]]++;
    }
    // f1(i,0,2750132)
    // {
    // 	if(bmaihai[i]>0)
    // 	cout<<i<<gp;
    // }
    vector<int> a;
    f2(i,2750131,0)
    {
    	if(bmaihai[i]>0&&prime[i]==0)
    	{
    		temp=binarySearch(i)+1;
    		//cout<<i<<gp<<temp<<endl;
    		bmaihai[temp]--;
    		bmaihai[i]--;
    		a.pb(temp);
    		i++;
    	}
    	else if(bmaihai[i]>0)
    	{
    		a.pb(i);
    		bmaihai[i/prime[i]]--;
    		bmaihai[i]--;
    		i++;
    	}
    }
    f1(i,0,a.size())
    cout<<a[i]<<gp;
    return 0;
}