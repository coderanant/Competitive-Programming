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
    int n,s,t;
    cin>>n>>s>>t;
    
    int p[n+1];
    f1(i,1,n+1)
    cin>>p[i];

    int ans = 0;
    n++;
    while(n--)
    {
        if(s==t)
        {
            cout<<ans<<endl;
            return 0;
        }
        ans++;
        s = p[s];
    }

    cout<<-1<<endl;
    return 0;
}