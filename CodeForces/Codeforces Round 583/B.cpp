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
    int b;
    cin>>b;
    int g;
    cin>>g;
    int n;
    cin>>n;
    b=min(b,n);
    g=min(g,n);
    int ans=n-min(b,g);
    ans=max(b,g)-ans+1;
    // f1(i,0,n+1)
    // {
    // 	if(i<=b||n-i<=g)
    // 		ans++;
    // }
    cout<<ans;
    return 0;
}