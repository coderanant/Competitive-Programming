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
    int n,v;
    cin>>n>>v;
    int a[n], b[n];
    f1(i,0,n)
    cin>>a[i]>>b[i];

    int ans = 0;
    f1(i,1,3002)
    {
        temp = v;
        f1(j,0,n)
        {
            if(a[j] == i-1)
            {
                int ss = min(temp, b[j]);
                ans += ss;
                temp -= ss;
                b[j] -= ss;
            }
        }
        f1(j,0,n)
        {
            if(a[j] == i)
            {
                int ss = min(temp, b[j]);
                ans += ss;
                temp -= ss;
                b[j] -= ss;
            }
        }
        // cout<<i<<gp<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}