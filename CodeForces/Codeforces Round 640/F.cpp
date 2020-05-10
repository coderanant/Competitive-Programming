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
        int n0, n1, n2;
        cin>>n0>>n1>>n2;
        vector<int> ans;
        if(n1 % 2 == 1)
        {
            f1(i,0,n0 + 1)
            ans.pb(0);
            while(n1 > 0)
            {
                if(ans[ans.size() - 1] == 0)
                ans.pb(1);
                else
                ans.pb(0);
                n1--;
            }
            f1(i,0,n2)
            ans.pb(1);
        }
        else
        {
            if(n1 == 0 && n2 == 0)
            {
                f1(i,0,n0 + 1)
                ans.pb(0);
                goto A;
            }
            ans.pb(1);
            if(n0 > 0 || n1 > 0)
            {
                ans.pb(0);
                n1--;
            }
            f1(i,0,n0)
            ans.pb(0);
            while(n1 > 0)
            {
                if(ans[ans.size() - 1] == 0)
                ans.pb(1);
                else
                ans.pb(0);
                n1--;
            }
            f1(i,0,n2)
            ans.pb(1);
        }
        A:
        f1(i,0,ans.size())
        cout<<ans[i];
        cout<<endl;
    }
    return 0;
}