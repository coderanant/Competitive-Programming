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
        int n;
        cin>>n;
        int a[n];
        int ans1 = 0, ans2 = -1 * mod, mini = -1 * mod;
        f1(i,0,n)
        {
            cin>>a[i];
            ans2 = max(ans2, a[i]);
        }
        if(ans2 <= 0)
        {
            cout<<ans2<<gp<<ans2<<endl;
            continue;
        }
        ans2 = 0;
        f1(i,0,n) if(a[i] > 0) ans2 += a[i];
        int currsum = 0;
        f1(i,0,n)
        {
            currsum += a[i];
            ans1 = max(ans1, currsum);
            if(currsum < 0)
            currsum = 0;
        }
        cout<<ans1<<gp<<ans2<<endl;
    }
    return 0;
}