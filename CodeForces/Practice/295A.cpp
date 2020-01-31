/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(int i=a;i<b;i++)
#define f2(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif

    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    f1(i,0,n)
    	cin>>arr[i];

    int quer[m][3];
    f1(i,0,m)
    {
    	f1(j,0,3)
    	{
    		cin>>quer[i][j];
    	}
    }

    int quer_freq[m+1];
    memset(quer_freq,0,sizeof(quer_freq));

    f1(i,0,k)
    {
    	int t1,t2;
    	cin>>t1>>t2;
    	quer_freq[t1-1]++;
    	quer_freq[t2]--;
    }

    int freq[m+1];
    memset(freq,0,sizeof(freq));
    temp=0;
    f1(i,0,m)
    {
    	temp+=quer_freq[i];
    	freq[i]=temp;
    }

    int a[n+1];
    memset(a,0,sizeof(a));
    f1(i,0,m)
    {
    	a[quer[i][0]-1]+=(quer[i][2]*freq[i]);
    	a[quer[i][1]]-=(quer[i][2]*freq[i]);
    }

    temp=0;
    f1(i,0,n)
    {
    	temp+=a[i];
    	arr[i]+=temp;
    	cout<<arr[i]<<gp;
    }
    return 0;
}