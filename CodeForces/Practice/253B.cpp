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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[5002];
    memset(a, 0, sizeof(a));
    f1(i,0,n)
    {
        cin>>temp;
        a[temp]++;
    }
    f1(i,1,5002)
    a[i] += a[i-1];

    int ans = mod;
    f1(i, 1, 5000/2+1)
    {
        ans = min(ans, n - (a[i*2] - a[i-1]));
    }
    cout<<ans<<endl;
    return 0;
}