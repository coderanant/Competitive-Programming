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
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    f1(i,0,n)
    {
    	cin>>j>>temp;
    	a.pb(mp(j,temp));
    }
    int home[100001],away[100001];
    memset(home,0,100001*sizeof(int));
    memset(away,0,100001*sizeof(int));
    f1(i,0,n)
    {
    	home[a[i].ff]++;
    	away[a[i].ss]++;
    }
    int m=(n-1);
    f1(i,0,n)
    {
    	cout<<home[a[i].ss]+m<<gp<<m-home[a[i].ss]<<endl;
    }

    return 0;
}