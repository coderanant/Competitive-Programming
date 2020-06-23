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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n>>k;
    
    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int l = 1, r = mod;
    int ans = mod;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        int siz = 0, flag = 0, maxi = 0;
        for(int i = 0; i < n; i++)
        {
            if(flag)
            {
                siz++;
                flag ^= 1;
            }
            else
            {
                if(a[i] <= mid)
                {
                    flag ^= 1;
                    maxi = max(maxi, a[i]);
                    siz++;
                }
            }
        }
        if(siz >= k)
        {
            ans = min(ans, maxi);
            r = mid - 1;
        }

        siz = 0, flag = 1, maxi = 0;
        for(int i = 0; i < n; i++)
        {
            if(flag)
            {
                siz++;
                flag ^= 1;
            }
            else
            {
                if(a[i] <= mid)
                {
                    flag ^= 1;
                    maxi = max(maxi, a[i]);
                    siz++;
                }
            }
        }
        if(siz >= k)
        {
            ans = min(ans, maxi);
            r = mid - 1;
        }

        if(r >= mid)
        l = mid + 1;
    }
    cout<<ans<<endl;
    return 0;
}