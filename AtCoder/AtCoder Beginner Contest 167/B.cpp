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
    int a, b, c, k;
    cin>>a>>b>>c>>k;
    int ans = 0;
    ans = min(k, a);
    k -= a;
    if(k <= 0 || k <= b)
    {
        cout<<ans<<endl;
        return 0;
    }
    k -= b;
    ans -= min(k, c);
    cout<<ans<<endl;
    return 0;
}