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
        int ans = -1;
        for(int i = 1; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                if(i <= k)
                ans = max(ans, i);
                if(n / i <= k)
                ans = max(ans, n / i);
            }
        }
        cout<<n / ans<<endl;
    }   
    return 0;
}