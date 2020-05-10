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
        vector<int> ans;
        while(n)
        {
            ans.pb(n % 10);
            n/=10;
        }
        int num = 0;
        reverse(ans.begin(), ans.end());
        f1(i,0,ans.size())
        {
            if(ans[i] != 0)
            {
                num++;
            }
        }
        cout<<num<<endl;
        f1(i,0,ans.size())
        {
            if(ans[i] != 0)
            {
                cout<<ans[i];
                f1(j,0,ans.size() - i - 1)
                cout<<0;
                cout<<gp;
            }
        }
        cout<<endl;
    }
    return 0;
}