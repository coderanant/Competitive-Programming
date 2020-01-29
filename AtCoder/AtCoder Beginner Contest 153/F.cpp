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
    
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
   	
    int n,d,a;
    cin>>n>>d>>a;
    d*=2;
    vector<pair<int,int>> tp(n);
    f1(i,0,n)
    	cin>>tp[i].ff>>tp[i].ss;

    sort(tp.begin(),tp.end());
    int arr[n];
    memset(arr,0,sizeof(arr));
    int ans=0;
    int temp=0;
    f1(i,0,n)
    {
    	temp+=arr[i];
    	tp[i].ss+=temp;
    	
    	int need = max(0ll,(tp[i].ss+a-1)/a);
    	ans+=need;
    	temp-=max(0ll,((tp[i].ss+a-1)/a)*a);
    	if(need!=0)
    	{
    		auto dd = upper_bound( tp.begin()+i, tp.end(), mp(tp[i].ff+d,mod) );
    	    	if(dd-tp.begin()<n)
    	    		arr[dd-tp.begin()]+=(((tp[i].ss+a-1)/a)*a);
    	}
    }
    cout<<ans<<endl;

    return 0;
}