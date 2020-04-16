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
    int n, d;
    cin>>n>>d;
    if(n < 3)
    {
        cout<<0<<endl;
        return 0;
    }
    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int ans = 0, low = 0, high = 2;
    while(high < n)
    {
        if(a[high] - a[low] <= d)
        {
            if(high > low)
            {
                temp = high - low - 1;
                ans += (temp * (temp + 1))/2;
            }
            high++;
        }
        else
        low++;
        if(high == low && low == n-1)
        break;
    }
    cout<<ans<<endl;
    return 0;
}