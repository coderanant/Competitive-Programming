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

void solve()
{
    int a, b;
    cin>>a>>b;
    string s;
    cin>>s;
    s += '0';
    int n = s.size();
    int count = 0, start = 0;
    f1(i, 0, n)
    {
        if(s[i] == '1')
        count++;
        else if(count > 0)
        {
            start = i;
            break;
        }
    }
    if(count == 0)
    {
        cout<<0<<endl;
        return ;
    }
    int ans = a;
    int flag = 0, last = start - 1;
    
    f1(i, start, n)
    {
        if(s[i] == '1')
        {
            if(flag == 0)
            {
                ans += min(b * (i - last - 1), a);
                flag = 1;
            }
            last = i;
        }
        else
        flag = 0;
    }
    cout<<ans<<endl;
    return ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}