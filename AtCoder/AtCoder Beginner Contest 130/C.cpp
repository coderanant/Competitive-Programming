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

#define ld long double
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif
    ld w,h,x,y;
    cin>>w>>h>>x>>y;
    long double ans=((long double)w*h)/2.0000;
    //cout<<ans;
    int ans2=0;
    
    if(x==w/2&&y==h/2)
    	ans2=1;
    
    //printf("%.15llf %lld",ans,ans2);
    cout<<fixed<<setprecision(19)<<ans<<gp<<ans2;
    return 0;
}