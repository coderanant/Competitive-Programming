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
    int k,n;
    cin>>k>>n;
    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int ans = (a[0] - 0) + (k-a[n-1]);
    f1(i,0,n-1)
    {
        ans = max(ans, a[i+1] - a[i]);
    }
    cout<<k-ans<<endl;
    return 0;
}