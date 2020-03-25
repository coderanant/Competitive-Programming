/*coderanant*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define f1(i,a,b) for(int i = a; i< b; i++)
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        f1(i,0,n)
        cin>>a[i];
        sort(a, a + n, greater<int> ());

        int ans = 10000000000;
        f1(i,0,n-1)
        {
            ans = min( (a[i] & a[i + 1]) ^ (a[i] | a[i + 1]), ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}