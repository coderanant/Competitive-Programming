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
    int n,t;
    cin>>n>>t;
    int a[n];
    int low = 0;
    int high = 0;
    int ans = 0;
    int sum = 0;
    f1(i,0,n)
    cin>>a[i];

    while(1)
    {
        if(high == n+1)
        break;

        if(sum <= t)
        {
            sum+=a[high];
            high++;
        }
        else
        {
            sum-= a[low];
            low++;
        }
        if(sum<=t)
        ans = max(ans, high - low);
    }
    cout<<ans<<endl;
    return 0;
}