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

int solve(int h)
{
	if(h==1)
		return 1;

	return 2*solve(h/2)+1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // #ifndef ONLINE_JUDGE
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    // 	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    // #endif

    int h;
    cin>>h;

    cout<<solve(h);

    return 0;
}