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
    int n, k;
    cin>>n>>k;
    
    int a[n+1];
    f1(i,1,n+1)
    cin>>a[i];

    int ans = 0;
    int temp = 0, curr = 1;

    int vis[n+1];
    memset(vis, -1, sizeof vis);
    vis[1] = 0;
    int cyc = -1,start = -1, base = -1;
    while(1)
    {
        curr = a[curr];
        temp++;
        if(temp == k)
        {
            cout<<curr<<endl;
            return 0;
        }
        else if(curr == a[curr])
        {
            cout<<curr<<endl;
            return 0;
        }
        if(vis[curr] >= 0)
        {
            k -= (vis[curr]);
            base = vis[curr];
            cyc = temp - vis[curr];
            start = curr;
            break;
        }
        vis[curr] = temp;
    }
    k %= cyc;

    f1(i,1,n+1)
    if(vis[i] == base + k) cout<<i<<endl;

    return 0;
}