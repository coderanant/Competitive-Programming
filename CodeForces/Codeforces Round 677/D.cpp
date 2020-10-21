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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    cin>>a[i];
    int ans = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != a[0])
        ans = i;
    }
    if(ans == -1)
    {
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != a[0])
        {
            cout<<i + 1<<gp<<1<<endl;
        }
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[0])
        cout<<ans + 1<<gp<<i + 1<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}