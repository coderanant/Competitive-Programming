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
#define ld long double

const int mod = 1000000007;
const ld PI = acosl(-1.0);
ll temp;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        s = '/' + s;
        
        int pre0[n + 2];
        int suff0[n + 2];
        int pre1[n + 2];
        int suff1[n + 2];
        pre0[0] = pre1[0] = 0;
        f1(i,1,n + 1)
        {
            pre0[i] = pre0[i - 1];
            pre1[i] = pre1[i - 1];

            if(s[i] == '0')
            pre0[i]++;
            else
            pre1[i]++;
        }
        suff1[n + 1] = suff0[n + 1] = 0;
        f2(i,n,1)
        {
            suff0[i] = suff0[i + 1];
            suff1[i] = suff1[i + 1];

            if(s[i] == '0')
            suff0[i]++;
            else
            suff1[i]++;
        }
        int ans = mod;
        
        f1(i,0,n + 1)
        {
            ans = min({ans, pre0[i] + suff1[i + 1], pre1[i] + suff0[i + 1]});
        }
        cout<<ans<<endl;
    }
    return 0;
}