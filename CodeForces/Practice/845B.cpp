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
    int k;
    cin>>k;
    string s;
    cin>>s;
    int n=s.size();
    vector<int> a;
    f1(i,0,n)
    {
    	a.pb(s[i]-'0');
    }
    sort(a.begin(),a.end());
    int ans=0;
    f1(i,0,n)
    ans+=a[i];
    //cout<<ans<<endl;
    f1(i,0,n)
    {
    	if(ans>=k)
    	{
    		cout<<i;
    		return 0;
    	}
    	else
    	{
    		ans+=(9-a[i]);
    	}
    }
    cout<<n;
    return 0;
}