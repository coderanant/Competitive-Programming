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
    
    int n, x, y;
    cin>>n>>x>>y;
    
    int ans[n];
    memset(ans,0,sizeof(ans));

    f1(i,1,n+1)
    {
        f1(j,i+1,n+1)
        {
            temp = min( j-i, abs(x-i)+abs(y-j)+1 );
            ans[temp]++;
        }
    }

    f1(i,1,n)
    cout<<ans[i]<<endl;

    return 0;
}