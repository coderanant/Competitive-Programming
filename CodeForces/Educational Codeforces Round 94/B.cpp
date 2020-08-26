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
        int p, f;
        cin>>p>>f;
        int cs, cw, s, w;
        cin>>cs>>cw>>s>>w;
        int ans = 0;
        if(w < s)
        {
            swap(w, s);
            swap(cs, cw);
        }

        for(int i = 0; i <= cs; i++)
        {
            if(i * s > p)
            break;
            int currs = i, currw = min(cw, (p - i * s) / w);

            temp = min(cs - currs, f / s);
            int temp2 = min((f - temp * s) / w, cw - currw);

            ans = max(ans, currs + currw + temp + temp2);

        }
        // temp = min(cs - currs, f / s);
        // ans1 += temp + min((f - temp * s) / w, cw - currw);

        // cout<<ans1<<endl;
        // ans = ans1;
        // ans1 = 0;
        // currs = 0, currw = 0;
        // for(int i = 0; i <= cs; i++)
        // {
        //     if(i * s > f)
        //     break;
        //     if(i + min(cw, (f - i * s) / w) > ans1)
        //     {
        //         ans1 = max(ans1, i + min(cw, (f - i * s) / w));
        //         currs = i; currw = min(cw, f - (i * s) / w);
        //     }
        // }
        // temp = min(cs - currs, p / s);
        // ans1 += temp + min((p - temp * s) / w, cw - currw);

        // ans = max(ans, ans1);
        cout<<ans<<endl;
    }
    return 0;
}