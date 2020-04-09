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
    int n, q;
    cin>>n>>q;

    int a[n];
    f1(i,0,n)
    cin>>a[i];

    int quer[n+1];
    memset(quer, 0 ,sizeof(quer));
    while(q--)
    {
        int a, b;
        cin>>a>>b;
        quer[a-1]++;
        quer[b]--;
    }
    
    temp = 0;
    int ans[n];
    f1(i,0,n)
    {
        // cout<<quer[i]<<gp;
        temp += quer[i];
        ans[i] = temp;
    }
    // cout<<endl;
    sort(ans, ans+n);
    sort(a, a+n);
    int sum = 0;
    f1(i,0,n)
    sum+=(ans[i]*a[i]);
    cout<<sum<<endl;
    return 0;
}