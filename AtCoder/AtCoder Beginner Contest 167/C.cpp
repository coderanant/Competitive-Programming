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
    int n, m, x;
    cin>>n>>m>>x;
    
    int c[n];
    int a[n][m];
    f1(i,0,n)
    {
        cin>>c[i];
        f1(j,0,m)
        cin>>a[i][j];
    }

    int ans = mod;
    int num = 1ll<<n;
    
    for(int i = 0; i < num; i++)
    {
        int cost = 0;
        int arr[m];
        memset(arr, 0, sizeof(arr));

        for(int j = 0; j < n; j++)
        {
            if( (i & (1ll<<j)) > 0)
            {
                cost+=c[j];
                f1(k,0,m)
                arr[k] += a[j][k];
            }
        }
        int flag = 1;
        f1(j,0,m)
        if(arr[j] < x)
            flag = 0;
        
        if(flag)
        ans = min(ans, cost);

    }
    if(ans == mod)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;
    return 0;
}