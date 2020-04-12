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
        f1(i,0,n)
        cin>>a[i];

        vector<int> diff;
        int maxi = a[0];
        f1(i,0,n)
        {
            maxi = max(a[i], maxi);
            if(a[i] < maxi)
            diff.pb(maxi - a[i]);
        }

        int bits[80];
        memset(bits, 0, sizeof(bits));

        f1(i,0,diff.size())
        {
            f1(j,0,32)
            {
                if( ((1ll<<j) & diff[i]) > 0)
                bits[j]++;
            }
        }

        int ans = 0;
        f1(i,0,70)
        {
            if(bits[i] > 0)
            {
                ans = max(ans, i+1);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}