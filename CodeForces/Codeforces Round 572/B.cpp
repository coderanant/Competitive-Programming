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
    int a[n];
    f1(i,0,n)
    cin>>a[i];
    sort(a,a+n);
    if(a[n-1]>=a[n-2]+a[n-3])
    	cout<<"NO";
    else
    {
    	swap(a[n-1],a[n-2]);
    	cout<<"YES"<<endl;
    	f1(i,0,n)
    	cout<<a[i]<<gp;
    }
    return 0;
}