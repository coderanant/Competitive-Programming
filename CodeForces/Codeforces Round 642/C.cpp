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
        if(n == 1)
        {
            cout<<0<<endl;
            continue;
        }
        int side = 0, ans = 0;
        f1(i,3,n+1)
        {
            side += (i-2);
            ans += (side + (i/2)) * 4;
            side += (i/2)*2;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}