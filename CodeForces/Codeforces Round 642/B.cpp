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
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int a[n], b[n];
        f1(i,0,n)
        cin>>a[i];
        f1(i,0,n)
        cin>>b[i];

        sort(a, a + n);
        sort(b, b + n, greater<int> ());
        int ans = 0;
        f1(i,0,k)
        {
            ans += max(a[i], b[i]);
        }
        f1(i,k,n)
        ans += a[i];
        cout<<ans<<endl;
    }
    return 0;
}