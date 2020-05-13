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
        int a[n+1];
        f1(i,1,n+1)
        cin>>a[i];

        int ans[n+1];
        f1(i,1,n+1)
        ans[i] = 1;
        int fans = 1;
        f1(i,1,n+1)
        {
            for(int j = 2 * i; j <= n; j += i)
            {
                if(a[j] > a[i])
                {
                    ans[j] = max(ans[j], ans[i] + 1);
                    fans = max(ans[j], fans);
                }
            }
        }
        cout<<fans<<endl;
    }
    return 0;
}