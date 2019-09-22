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

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int lar=0;
    int lar1=0;
    temp=1;
    while(temp<=n)
    {
    	lar1++;
    	temp*=2;
    }

    bitset<30> b(n);
    lar=b.count();

    //cout<<lar<<gp<<lar1<<endl;
    int sum=0;
    vector<int> kkbb;

    i=0;
    while(1)
    {
    	if(((1<<i)&n)>0)
    		kkbb.pb(i);
    	if((1<<i)>n)
    		break;
    	i++;
    }
    if(kkbb.size()>1)
    {
    	if(sum<kkbb[kkbb.size()-2]+lar1)
    		sum=kkbb[kkbb.size()-2]+lar1;
    }
    if(sum<2*lar1-3)
    	sum=2*lar1-3;
    if(sum<lar+lar1-1)
    	sum=lar+lar1-1;
    cout<<sum<<endl;
}
    return 0;
}