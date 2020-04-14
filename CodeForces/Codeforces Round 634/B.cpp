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
        int n, a, b;
        cin>>n>>a>>b;
        string ans;
        // ans.resize;
        f1(i,0,b)
        {
            ans.pb( char(i+'a'));
        }
        f1(i,0,a-b)
        ans.pb('a');
        int sz = ans.size();
        f1(i,0,n)
        cout<<ans[i%sz];
        cout<<endl;
    }
    return 0;
}