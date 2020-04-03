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
        int a[n];
        f1(i,0,n)
        cin>>a[i];

        set<int> ss;
        int fr[n];
        memset(fr,0,sizeof(fr));
        f1(i,0,n)
        {
            ss.insert(a[i]);
            auto sz = ss.end();
            sz--;

            if((*(ss.begin()) == 1 && *(sz) == i+1) && ss.size()==(i+1))
            {
                fr[i] = 1;
            }
            // cout<<fr[i]<<gp;
        }
        // cout<<endl;
        ss.empty();
        set<int> ss1;
        int la[n];
        memset(la,0,sizeof(la));
        f2(i,n-1,0)
        {
            ss1.insert(a[i]);
            auto sz = ss1.end();
            sz--;

            if((*(ss1.begin()) == 1 && *(sz) == (n-i)) && ss1.size()==(n-i))
            {
                la[i] = 1;
            }
            // cout<<*ss.begin()<<gp<<*(sz)<<gp<<n-i<<endl;
            // cout<<la[i]<<endl;
        }
        // cout<<endl;
        vector<pair<int,int>> ans;
        f1(i,0,n-1)
        {
            if(fr[i]==1 && la[i+1])
            {
                ans.pb(mp(i+1, n-(i+1)));
            }
        }
        cout<<ans.size()<<endl;
        f1(i,0,ans.size())
        {
            cout<<ans[i].ff<<gp<<ans[i].ss<<endl;
        }
    }
    return 0;
}

