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
    int ans = 0;
    int n;
    cin>>n;
    
    vector<pair<int,int>> a(n);
    f1(i,0,n)
    {
        cin>>a[i].ff>>a[i].ss;
    }

    sort(a.begin(), a.end());

    f1(i,0,n)
    {
        if(a[i].ss >= ans)
        ans = a[i].ss;
        else
        ans = a[i].ff;
    }

    cout<<ans<<endl;
    return 0;
}