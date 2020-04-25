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
    int n, m;
    cin>>n>>m;
    int a[n];
    f1(i,0,n)
    cin>>a[i];
    sort(a, a+n);
    int i = 1, temp = 1, sum = 0;
    int ans = 0;
    while(i<=n)
    {
        sum += a[i-1];
        if(i%m == 0)
        {
            ans+=sum*temp;
            ans%=mod;
            sum = 0;
            temp++;
        }
        i++;
    }
    ans+=sum*(temp-1);
    ans%=mod;
    cout<<ans<<endl;
    return 0;
}