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
    int n,k;
    cin>>n>>k;

    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int ans = 0;
    int mini = mod;
    f1(i,0,n)
    {
        if(a[i]<0 && k>0)
        {
            a[i]*=-1;
            k--;
        }
        if(a[i]<mini)
        mini=a[i];
        ans+=a[i];
    }
    if(k%2==0)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<ans-(2*mini)<<endl;
    }
    return 0;
}