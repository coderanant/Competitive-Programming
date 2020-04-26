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
        string t;
        cin>>t;
        int _1 = 0, _0 = 0;
        f1(i,0,t.size())
        {
            if(t[i] == '1')
            _1 = 1;
            if(t[i] == '0')
            _0 = 1;
        }
        if(_1 == 0 || _0 == 0)
        {
            cout<<t<<endl;
            continue;
        }
        string ans;
        ans+=t[0];
        f1(i,1,t.size())
        {
            if(t[i] == t[i-1])
            {
                if(t[i] == '0')
                {
                    ans+="10";
                }
                else
                ans+="01";
            }
            else
            ans+=t[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}