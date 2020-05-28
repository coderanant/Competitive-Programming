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
        string s;
        cin>>s;
        int n = s.size();
        int low = 0, high = 0;
        int ans = mod;
        int o = 0, two = 0, th = 0;
        while(1)
        {
            if(o > 0 and two > 0 and th > 0)
            {
                ans = min(ans, high - low);
                if(s[low] == '1')
                o--;
                else if(s[low] == '2') two--;
                else th--;
                low++;
            }
            else
            {
                if(high == n)
                break;
                if(s[high] == '1') o++;
                else if(s[high] == '2') two++;
                else th++;
                high++;
            }
        }
        if(ans == mod)
        cout<<0<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}